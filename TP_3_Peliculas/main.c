#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 20


int main()
{

    eMovie peliculas[TAM];//array de peliculas
    eMovie* pPeliculas;//puntero del array peliculas
    pPeliculas=peliculas;
    inicializar(peliculas,TAM);//incializo variable estado en 0
    int i;
    int j;

    if(cargarPeliculas(peliculas,TAM)==0)
    {
        printf("No se pudo cargar las peliculas\n");
    }else
    {
        printf("Peliculas cargadas con exito!\n");
    }

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificar pelicula\n");
        printf("4- Generar pagina web\n");
        printf("5- Mostrar peliculas\n");
        printf("6- Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                darAlta(peliculas,TAM);
                system("pause");
                system("cls");
                break;
            case 2:

                darBaja(pPeliculas,TAM);
                system("pause");
                system("cls");

                break;
            case 3:
                modificarPelicula(peliculas,TAM);
                system("pause");
                system("cls");
                break;
            case 4:
                generarHTML(peliculas,TAM,"ListaDePeliculas.html");
                system("pause");
                system("cls");
                break;
            case 5:
                mostrar(peliculas,TAM);
                system("pause");
                system("cls");
                break;

            case 6:
                seguir = 'n';
                break;
        }
    }

    agregarPelicula(peliculas);
    return 0;
}
