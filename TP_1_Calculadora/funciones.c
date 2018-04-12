#include <stdio.h>
#include "funciones.h"

float pedirNumero(char mensaje[])
{       float numero;

        printf("%s",mensaje);
        scanf("%f",&numero);
        return numero;
}
void suma(float x,float y,int flagA,int flagB)
{
    if (flagA==1 && flagB==1)
    {
        float resultado;
        resultado=x+y;
        printf("La suma es %2.f \n",resultado);
    }else
    {
        printf("Error: Ingrese los numeros a sumar\n");
    }
}


void resta(float x,float y,int flagA,int flagB)
{
    if (flagA==1 && flagB==1)
    {
        float resultado;
        resultado=x-y;
        printf("La resta es %2.f \n",resultado);
    }else
    {
        printf("Error: Ingrese los numeros a restar\n");
    }
}


void division(float x,float y,int flagA,int flagB)
{
    if(y==0)
    {
        printf("Error: No se puede dividir por cero\n");
    }else{
        if (flagA==1 && flagB==1)
        {
        float resultado;
        resultado=x/y;
        printf("El resultado de la division es %.2f \n",resultado);
        }else
        {
        printf("Error: Ingrese los numeros a dividir\n");
        }
}}



void multiplicacion(float x,float y,int flagA,int flagB)
{
    if (flagA==1 && flagB==1)
    {
        float resultado;
        resultado=x*y;
        printf("La multiplicacion es %2.f \n",resultado);
    }else
    {
        printf("Error: Ingrese los numeros a multiplicar\n");
    }
}



void operaciones(float x,float y,int flagA,int flagB)
{

    suma(x,y,flagA,flagB);
    resta(x,y,flagA,flagB);
    division(x,y,flagA,flagB);
    multiplicacion(x,y,flagA,flagB);
    factorial(x,flagA);


}



void factorial(float x,int flagA)
{
    int AuxA=(int)x;
    int factorial=1;
    if(flagA==1)
    {if(x<0)
    {

    printf("No se puede sacar el factorial de un numero negativo.\n");

    }
    else
    {
        if(x!=AuxA)
    {
        printf("No se puede hacer el factorial de un numero decimal.\n");
    }
    else
    {
    for(int i=1; i<=(int)x; i++)
        {
            factorial *= i;
        }
         printf("El factorial de A es: %d \n",factorial);
    }}}else
    {
        printf("Debe ingresar un numero en A\n");

    }


}



int valRango(int opcion,int min,int max)
{
    printf("Opcion elegida : ");
    scanf("%d",&opcion);

    while(opcion<min || opcion>max)
    {
        printf("Error: Ingrese una opcion. De %d a %d : ",min,max);
        scanf("%d",&opcion);
    }

    return opcion;

}
