#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 20


int main()
{
    ePersona listaDePersonas[TAM];
    inicializarestados(listaDePersonas,TAM);
    agregarPersonaHardCode(listaDePersonas,TAM);



    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");
        printf("Seleccione una opcion: ");

        scanf(" %d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(listaDePersonas,TAM);
                break;
            case 2:
                borrarPersona(listaDePersonas,TAM);
                break;
            case 3:
                mostrarLista(listaDePersonas,TAM);
                break;
            case 4:
                mostrarGrafico(listaDePersonas,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
