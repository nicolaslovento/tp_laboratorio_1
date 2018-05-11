

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;
/** \brief Saca el maximo entre 3 valores
 *
 * \param int primer valor
 * \param int segundo valor
 * \param int tercer valor
 * \return int retorna el numero maximo
 *
 */
int sacarMaximo(int,int  ,int );



/** \brief Da de baja un elemento del array
 *
 * \param [] ePersona array a recorrer
 * \param int tamaño del array
 * \return void
 *
 */
void borrarPersona(ePersona [],int );



/** \brief Agrega un elemento al array
 *
 * \param [] ePersona Array a cargar
 * \param int tamaño del array
 * \return void
 *
 */
void agregarPersona(ePersona [],int );



/** \brief Inicializa valor en el array
 *
 * \param [] ePersona array  a cargar
 * \param int tamaño del array
 * \return void
 *
 */
void inicializarestados(ePersona [],int );



/** \brief Ingresa datos hardcodeados al array de tipo ePersona
 *
 * \param ePersona[] array a cargar
 * \param int tamaño del array
 * \return void
 *
 */
void agregarPersonaHardCode(ePersona[],int );


/** \brief Muestra los elementos del array
 *
 * \param [] ePersona array a recorrer
 * \param int tamaño del array
 * \return void
 *
 */
void mostrarLista(ePersona [],int );


/** \brief ordena alfabeticamente un array
 *
 * \param [] ePersona Array a recorrer
 * \param int Tamaño del array
 * \return void
 *
 */
void ordenarLista(ePersona [],int);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @rturn el primer indice disponible
 */
int obtenerespacioLibre(ePersona lista[],int );

/**
 * Obtiene el indice que coincide con l dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @rturn el indice en donde se encuntra el elemento que coincide con l parametro dni
 */
int buscarPorDni(ePersona [],int, int );


