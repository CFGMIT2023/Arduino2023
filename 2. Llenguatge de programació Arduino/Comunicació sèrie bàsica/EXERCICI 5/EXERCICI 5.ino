
/********************************************************************************
**                                                                              **
**                              Hello World                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********** Variables ***********************************************************

//********** Setup ***************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operació que vols realitzar?");
  Serial.print("1.");
  Serial.println("Comprovar numero de tarjeta de credit");
  Serial.print("2.");
  Serial.println("Comprovar numero de compte bancari");
  Serial.print("3.");
  Serial.println("Buscar un digit perdut de tarjeta de credit");
}

//********* Loop *****************************************************************
void loop()                 // run over and over again
{
  
}

//********* Funcions *************************************************************
