#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void generarHTML(eMovie* pPelicula,int tam,char nombreArchivo[])
{
    int cantidadEscrita;
    int i;
    int longitud;
    char imagen[500];
    char titulo[500];
    char duracion[500];
    char puntaje[500];

    char descripcion[1000];
    char genero[500];
    char link[500];
    char lineaComienzo[]="<html><HEAD><TITLE>Peliculas</TITLE></HEAD><CENTER><h1><font color=red>Peliculas</font></h1></CENTER><hr><body><font size=4>";
    char lineaImagenIni[]="<img src=";
    char lineaImagenFin[]=">";
    char lineaTituloIni[]="<h3>Titulo: ";
    char lineaTituloFin[]="</h3>";
    char lineaGeneroIni[]="<h3>Genero: ";
    char lineaGeneroFin[]="</h3>";
    char lineaDuracionIni[]="<h3>Duracion: ";
    char lineaDuracionFin[]="</h3>";
    char lineaPuntajeIni[]="<h3>Puntaje: ";
    char lineaPuntajeFin[]="</h3>";
    char lineaDescripcionIni[]="<h3>Descripcion: ";
    char lineaDescripcionFin[]="</h3>";
    char lineaFinal[]="<p>   </font></body></html>";

    FILE * html;

    html=fopen(nombreArchivo,"w");

    if(html==NULL)
    {
        printf("Error. El archivo no pudo crearse.");
        exit(1);
    }

    longitud=strlen(lineaComienzo);
    cantidadEscrita=fwrite(lineaComienzo,sizeof(char),longitud,html);

    if(cantidadEscrita<longitud)
    {
        printf("Error al escribir el archivo");
        exit(1);
    }


     for(i=0;i<tam;i++)
    {
		if((pPelicula+i)->estado==1)
        {

            imagen[0]='\0';
        	strcat(imagen,lineaImagenIni);
            strcat(imagen,(pPelicula+i)->linkImagen);
            strcat(imagen,lineaImagenFin);

            longitud=strlen(imagen);


            cantidadEscrita=fwrite(imagen, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
            {
                printf("Error al escribir el archivo\n");
                exit(1);
            }
            titulo[0]='\0';
            strcat(titulo,lineaTituloIni);
            strcat(titulo,(pPelicula+i)->titulo);
            strcat(titulo,lineaTituloFin);

            longitud=strlen(titulo);


            cantidadEscrita=fwrite(titulo, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
            {
                printf("Error al escribir el archivo\n");
                exit(1);
            }
            genero[0]='\0';
            strcat(genero,lineaGeneroIni);
            strcat(genero,(pPelicula+i)->genero);
            strcat(genero,lineaGeneroFin);

            longitud=strlen(genero);


            cantidadEscrita=fwrite(genero, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
            {
                printf("Error al escribir el archivo\n");
                exit(1);
            }
            duracion[0]='\0';
            strcat(duracion,lineaDuracionIni);
            strcat(duracion,(pPelicula+i)->duracion);
            strcat(duracion,lineaDuracionFin);

            longitud=strlen(duracion);


            cantidadEscrita=fwrite(duracion, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
            {
                printf("Error al escribir el archivo\n");
                exit(1);
            }
            puntaje[0]='\0';
            strcat(puntaje,lineaPuntajeIni);
            strcat(puntaje,(pPelicula+i)->puntaje);
            strcat(puntaje,lineaPuntajeFin);

            longitud=strlen(puntaje);


            cantidadEscrita=fwrite(puntaje, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
            {
                printf("Error al escribir el archivo\n");
                exit(1);
            }
            descripcion[0]='\0';
            strcat(descripcion,lineaDescripcionIni);
            strcat(descripcion,(pPelicula+i)->descripcion);
            strcat(descripcion,lineaDescripcionFin);

            longitud=strlen(descripcion);


            cantidadEscrita=fwrite(descripcion, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
            {
                printf("Error al escribir el archivo\n");
                exit(1);
            }
}}
            longitud=strlen(lineaFinal);
            cantidadEscrita=fwrite(lineaFinal, sizeof(char), longitud, html);

            if(cantidadEscrita<longitud)
                {
                printf("Error al escribir el archivo\n");
                    exit(1);
                    }
                    printf("Se creo correctamente el archivo.\n");
                    //Cierro el archivo*/
                fclose(html);

}





void darBaja(eMovie* pPelicula,int tam)
{
    int id;
    int i;
    char letra;

    mostrar(pPelicula,tam);

    printf("Ingrese id de la pelicula: ");
    scanf(" %d",&id);

    for(i=0;i<tam;i++)
    {
        if((pPelicula+i)->id==id && (pPelicula+i)->estado==1)
        {
            printf("Esta seguro que desea borrar la pelicula? s/n\n");
            letra=getch();
            if(letra=='s')
            {
                pPelicula[i].estado=0;
            printf("La pelicula %s fue dada de baja \n",pPelicula[i].titulo);
            }

            break;
        }
    }
    agregarPelicula(pPelicula);

}

int modificarPelicula(eMovie* pPelicula,int tam)
{
    int idIngresada;
    int opcion;
    int i;
    char titulo[20];
    char genero[20];
    char duracion[10];
    char descripcion[1000];
    mostrar(pPelicula,tam);
    printf("Que pelicula desea modificar?\nIngrese id de pelicula:");
    scanf("%d",&idIngresada);

    for(i=0;i<tam;i++)
    {
        if((pPelicula+i)->id==idIngresada && (pPelicula+i)->estado==1)
        {
            printf("Titulo: %s\nGenero: %s\nDuracion: %s\nDescripcion:%s\n",(pPelicula+i)->titulo,(pPelicula+i)->genero,(pPelicula+i)->duracion,(pPelicula+i)->descripcion);
            printf("Que desea modificar?\n");
            printf("1.Titulo \n2.Genero \n3.Duracion \n4.Descripcion\nElija opcion:\n ");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                printf("Ingrese nuevo titulo: ");
                fflush(stdin);
                gets(titulo);
                strcpy(pPelicula[i].titulo,titulo);
                break;
            case 2:
                printf("Ingrese nuevo genero: ");
                fflush(stdin);
                gets(genero);
                strcpy(pPelicula[i].genero,genero);
                break;
            case 3:
                printf("Ingrese nueva duracion: ");
                fflush(stdin);
                gets(duracion);
                strcpy(pPelicula[i].duracion,duracion);
                break;
            case 4:
                printf("Ingrese nueva descripcion: ");
                fflush(stdin);
                gets(descripcion);
                strcpy(pPelicula[i].descripcion,descripcion);
                break;
            default:
                printf("Ingrese una opcion correcta.\n");break;

            }
            break;
        }else
        {
            printf("No se encontro el id.\n");
            break;
        }
    }
    agregarPelicula(pPelicula);
}


int mostrar(eMovie* pPeliculas,int tam)
{
    int i;
    printf("ID |   TITULO   |   GENERO  |  DURACION  |  PUNTAJE  \n");
    for(i=0;i<tam;i++)
    {

        if((pPeliculas+i)->estado==1)
        {

            printf("%d  %10s   %10s   %10s   %10s \n",(pPeliculas+i)->id,(pPeliculas+i)->titulo,(pPeliculas+i)->genero,(pPeliculas+i)->duracion,(pPeliculas+i)->puntaje);
        }
    }
    return 0;

}


int devolverSiguienteId(eMovie peliculas[],int tam)
{
    int retorno = 0;
    int i;
    if(tam > 0 && peliculas != NULL)
    {
        for(i=0; i<tam; i++)
        {
            if(peliculas[i].estado == 1)
            {
                    if(peliculas[i].id>retorno)
                    {
                         retorno=peliculas[i].id;
                    }

            }

        }
    }
     return retorno+1;
}

int buscarLugarLibre(eMovie peliculas[],int tam)//

{
    int retorno=-1;
    int i;
    if(tam > 0 && peliculas != NULL)
    {
        retorno = -2;
        for(i=0;i<tam;i++)
        {
            if(peliculas[i].estado == 0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}


int darAlta(eMovie peliculas[],int tam)//
{


    int id;
    int indice;
    int retorno=-1;
    if(tam > 0 && peliculas != NULL)
    {
        retorno = -2;
        indice =buscarLugarLibre(peliculas,tam);//busca el lugar libre, devuelve i=indice.
        if(indice >= 0)
        {
            retorno = -3;
            id = devolverSiguienteId(peliculas,tam);//Devuelve siguiente id

            retorno = 0;
            printf("Ingrese Titulo: ");
            fflush(stdin);
            gets(peliculas[indice].titulo);//Pide y guarda string
            printf("Ingrese Genero: ");
            fflush(stdin);
            gets(peliculas[indice].genero);//Pide y guarda string
            printf("Ingrese duracion: ");
            fflush(stdin);
            gets(peliculas[indice].duracion);//Pide y guarda string
            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(peliculas[indice].descripcion);//Pide y guarda string
            fflush(stdin);
            printf("Ingrese puntaje: ");
            fflush(stdin);
            gets(peliculas[indice].puntaje);
            printf("Link de la imagen: ");
            fflush(stdin);
            gets(peliculas[indice].linkImagen);


            peliculas[indice].id = id;
            peliculas[indice].estado = 1;

            agregarPelicula(peliculas);
            printf("Se dio de alta con exito\n");
        }
    }
    return retorno;
}

int cargarPeliculas(eMovie* puntero,int tam)
{
    FILE* pArchivo;

    if(pArchivo=fopen("ListaDePeliculas.dat","rb"))
    {
        fread(puntero,sizeof(eMovie),tam,pArchivo);


        fclose(pArchivo);
        return 1;
    }



    return 0;


}

int agregarPelicula(eMovie* pelicula)
{
    FILE* pArchivo;

    pArchivo=fopen("ListaDePeliculas.dat","wb");

    fwrite(pelicula,sizeof(eMovie),20,pArchivo);

    fclose(pArchivo);

    return 0;

}

void inicializar(eMovie peliculas[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
       peliculas[i].estado=0;

    }
}
