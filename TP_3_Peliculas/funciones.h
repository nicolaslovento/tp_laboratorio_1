typedef struct{
    char titulo[20];
    char genero[20];
    int estado;
    int id;
    char duracion[10];
    char descripcion[1000];
    char puntaje[10];
    char linkImagen[100];
}eMovie;
void generarHTML(eMovie* ,int ,char []);
void darBaja(eMovie* ,int );
int modificarPelicula(eMovie* pPelicula,int tam);
void inicializar(eMovie peliculas[],int tam);
int darAlta(eMovie peliculas[],int tam);
int buscarLugarLibre(eMovie peliculas[],int tam);
int devolverSiguienteId(eMovie peliculas[],int tam);

















int mostrar(eMovie peliculas[],int tam);


int cargarPeliculas(eMovie* peliculas,int tam);


/**
 *  Agrega una pelicula al archivo binario
 *  @param movie la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
int agregarPelicula(eMovie* );

/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
//int borrarPelicula(EMovie movie);

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
//void generarPagina(EMovie lista[], char nombre[]);
