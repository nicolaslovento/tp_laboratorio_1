#include <stdio.h>
#include <string.h>
#include "funciones.h"

int sacarMaximo(int uno,int dos ,int tres)
{
    int i;
    int max=0;
    for(i=0;i<3;i++)
    {
        if(max<uno)
        {
            max=uno;
        }else
        {
            if(max<dos)
            {
                max=dos;
            }else
            {

                max=tres;
            }

        }
    }
    return max;
}

void mostrarGrafico(ePersona lista[],int TAM)
{
    int i;
    int menor=0;
    int entre=0;
    int mayor=0;
    int max;
    ordenarLista(lista,TAM);
    for(i=0;i<TAM;i++)
    {
        if(lista[i].estado==1)
        {


        if(lista[i].edad<18 )
        {
            menor++;
        }else
        {
            if(lista[i].edad>18 && lista[i].edad<35)
            {
                entre++;
            }else
            {
                mayor++;
            }
             }
        }
    }


    max=sacarMaximo(menor,entre,mayor);//saco maximo entre los 3.
    int z;
    for (z=max;z>0;z--)
    {

        if(z>menor)
        {
            printf("  ");
        }else
        {
            printf(" *");
        }

        if(z>entre)
        {
            printf("      ");
        }else
        {
            printf("     *");
        }

        if(z>mayor)
        {
            printf("   \n");
        }else
        {
            printf("     *\n");
        }
    }


    printf("<18  19-35  >35\n");
}


void borrarPersona(ePersona lista[],int TAM)
{
   int index;
   int dni;
   printf("Ingrese dni: ");
   scanf(" %d",&dni);
   index=buscarPorDni(lista,TAM,dni);
   if(index!=-1)
   {
       lista[index].estado=0;
       printf("Se borro con exito\n");

   }else
   {
       printf("No se escontro la persona.\n");
   }


}


int buscarPorDni(ePersona lista[],int TAM, int dni)
{
    int i;
    int index=-1;
    for(i=0;i<TAM;i++)
    {
        if(lista[i].dni==dni)
        {
            index=i;

        }
    }
    return index;

}

void ordenarLista(ePersona lista[],int TAM)
{
    int i;
    int j;
    int n;
    char aux[50];
    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
            {
                if(lista[i].estado==1 && lista[j].estado==1)
                {
                    n=strcmp(lista[i].nombre,lista[j].nombre);
                        if(n>0)
                 {
                        strcpy(aux,lista[i].nombre);
                        strcpy(lista[i].nombre,lista[j].nombre);
                        strcpy(lista[j].nombre,aux);

                 }
                }


            }


        }

    }


 void mostrarLista(ePersona lista[],int TAM)
 {
     int i;
    ordenarLista(lista,TAM);
    printf(" |Nombre |      |  Edad   |    |  DNI  |\n");
     for(i=0;i<TAM;i++)
    {
        if(lista[i].estado==1)
        {
             printf("%-10s   %10d        %5d\n",lista[i].nombre,lista[i].edad,lista[i].dni);
        }


}
  }


void inicializarestados(ePersona persona[],int TAM)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        persona[i].estado=0;
        persona[i].edad=0;

    }
 }

int obtenerEspacioLibre(ePersona lista[],int TAM)
{
    int i;
    int index=-1;
    for(i=0;i<TAM;i++)
    {
        if(lista[i].estado==0)
        {
            index=i;
        }
     }
    return index;
}


void agregarPersona(ePersona lista[],int TAM)
{
    int i;
    int index;
    for(i=0;i<TAM;i++)
    {
        index=obtenerEspacioLibre(lista,TAM);
        if(index!=-1)
        {
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(lista[index].nombre);
            printf("Ingrese edad: ");
            scanf(" %d",&lista[index].edad);
            printf("Ingrese DNI: ");
            scanf(" %d",&lista[index].dni);
            lista[index].estado=1;
            printf("Se agrego existosamente.\n");
            break;

        }

    }

}

void agregarPersonaHardCode(ePersona lista[],int TAM)
{

    char nombre[][50]={"Nicolas","Matias","Daniel","Maria","Sofia","Hernan","Eutanasio","Gertrudis","Mario","Roberto","Facundo","Claudio","Uhana","Franco","Gina"};
    int edad[15]={10,11,10,13,3,4,20,23,25,56,42,80,70,67,23};
    int dni[15]={37861772,20987232,20192832,12381265,124123123,421412344,34641231,90232123,4123123123,24123123,124123123,1231231234,56344123,67453234,123412354};

    int i;
    for(i=0;i<15;i++)
    {
        if(obtenerEspacioLibre(lista,TAM)!=-1)
        {
            strcpy(lista[i].nombre,nombre[i]);
            lista[i].edad=edad[i];
            lista[i].dni=dni[i];
            lista[i].estado=1;

        }
     }
}

