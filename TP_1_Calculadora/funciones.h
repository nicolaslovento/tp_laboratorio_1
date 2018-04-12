/** \brief Pide un n�mero y lo devuelve.
 * \param char[] Mensaje a ser mostrado.
 * \return float Retorna el n�mero.
 */
float pedirNumero(char[]);


/** \brief Valida que un n�mero est� dentro de un rango y lo devuelve.
 *
 * \param int N�mero a validar.
 * \param int M�nimo del rango.
 * \param int M�ximo del rango.
 * \return int Retorna el n�mero validado.
 *
 */
int valRango(int,int,int);



/** \brief Si las banderas est�n en 1 entonces suma los dos n�meros ingresados.
 *
 * \param float,float Primer y segundo n�mero a sumar.
 * \param int,int Banderas.
 * \return void Muestra la suma por pantalla.
 */
 void suma(float,float,int,int);



/** \brief Si las banderas est�n en 1 entonces resta los dos n�meros ingresados.
 *
 * \param float,float Primer y segundo n�mero a restar.
 * \param int,int Banderas.
 * \return void Muestra la resta por pantalla.
 *
 */
void resta(float,float,int,int);


/** \brief Si las banderas est�n en 1 entonces valida que el segundo n�mero no sea 0 y  divide los dos n�meros ingresados.
 *
 * \param float,float Primer y segundo n�mero a dividir.
 * \param int,int Banderas.
 * \return void Muestra la divisi�n por pantalla.
 *
 */
void division(float,float,int,int);


/** \brief Si las banderas est�n en 1 entonces multiplica los dos n�meros ingresados.
 *
 * \param float,float Primer y segundo n�mero a multiplicar.
 * \param int,int Banderas.
 * \return void Muestra la multiplicaci�n por pantalla.
 *
 */
void multiplicacion(float,float,int,int);

/** \brief Si la bandera est� en 1 entonces saca el factor del n�mero. Antes valida que no sea negativo ni con decimales.
 *
 * \param float N�mero a factorear
 * \param int Bandera de dicho n�mero.
 * \return void Muestra el factorial por pantalla.
 *
 */
void factorial(float,int);


/** \brief Muestra todas las operaciones matem�ticas del men� de opciones.
 *
 * \param float Primer n�mero.
 * \param float Segundo n�mero.
 * \param int Bandera A.
 * \param int Bandera B.
 * \return void Muestra todas las operaciones matem�ticas por pantalla.
 *
 */
void operaciones(float,float,int,int);

