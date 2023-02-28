/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** Nom : Deivith Trujillo Meza                                                   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 99;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua >= 100)
  {
    Serial.println("Aigua supera els 100C, esta bullint!");
  } 
  else if (tempAigua <=100)
  Serial.println ("Aigua bullint...");
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************


