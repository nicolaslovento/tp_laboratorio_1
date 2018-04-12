/** \brief Pide un número y lo devuelve.
 * \param char[] Mensaje a ser mostrado.
 * \return float Retorna el número.
 */
float pedirNumero(char[]);


/** \brief Valida que un número esté dentro de un rango y lo devuelve.
 *
 * \param int Número a validar.
 * \param int Mínimo del rango.
 * \param int Máximo del rango.
 * \return int Retorna el número validado.
 *
 */
int valRango(int,int,int);



/** \brief Si las banderas están en 1 entonces suma los dos números ingresados.
 *
 * \param float,float Primer y segundo número a sumar.
 * \param int,int Banderas.
 * \return void Muestra la suma por pantalla.
 */
 void suma(float,float,int,int);



/** \brief Si las banderas están en 1 entonces resta los dos números ingresados.
 *
 * \param float,float Primer y segundo número a restar.
 * \param int,int Banderas.
 * \return void Muestra la resta por pantalla.
 *
 */
void resta(float,float,int,int);


/** \brief Si las banderas están en 1 entonces valida que el segundo número no sea 0 y  divide los dos números ingresados.
 *
 * \param float,float Primer y segundo número a dividir.
 * \param int,int Banderas.
 * \return void Muestra la división por pantalla.
 *
 */
void division(float,float,int,int);


/** \brief Si las banderas están en 1 entonces multiplica los dos números ingresados.
 *
 * \param float,float Primer y segundo número a multiplicar.
 * \param int,int Banderas.
 * \return void Muestra la multiplicación por pantalla.
 *
 */
void multiplicacion(float,float,int,int);

/** \brief Si la bandera está en 1 entonces saca el factor del número. Antes valida que no sea negativo ni con decimales.
 *
 * \param float Número a factorear
 * \param int Bandera de dicho número.
 * \return void Muestra el factorial por pantalla.
 *
 */
void factorial(float,int);


/** \brief Muestra todas las operaciones matemáticas del menú de opciones.
 *
 * \param float Primer número.
 * \param float Segundo número.
 * \param int Bandera A.
 * \param int Bandera B.
 * \return void Muestra todas las operaciones matemáticas por pantalla.
 *
 */
void operaciones(float,float,int,int);

