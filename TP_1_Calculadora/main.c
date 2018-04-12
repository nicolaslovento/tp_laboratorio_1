#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;
    int flagA=0;
    int flagB=0;
    float x;
    float y;
    do
    {
        if(flagA==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }else
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n",x);
        }

        if(flagB==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }else
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n",y);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        opcion=valRango(opcion,1,9);

        switch(opcion)
        {
            case 1:
                x=pedirNumero("Ingrese primer numero : ");
                flagA=1;
                system("cls");
                break;
            case 2:
                y=pedirNumero("Ingrese segundo numero : ");
                flagB=1;
                system("cls");
                break;
            case 3:
                suma(x,y,flagA,flagB);
                system("pause");
                system("cls");
                break;
            case 4:
                resta(x,y,flagA,flagB);
                system("pause");
                system("cls");
                break;
            case 5:
                division(x,y,flagA,flagB);
                system("pause");
                system("cls");
                break;
            case 6:
                multiplicacion(x,y,flagA,flagB);
                system("pause");
                system("cls");
                break;
            case 7:
                factorial(x,flagA);
                system("pause");
                system("cls");
                    break;
            case 8:
                operaciones(x,y,flagA,flagB);
                system("pause");
                system("cls");
                break;

            case 9:
                seguir = 'n';
                break;
        }

        }while(seguir=='s');


    return 0;
}
