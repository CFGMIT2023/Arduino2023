
/**********************************************************************************
**                                                                               **
**                           on/off button control LED                           **
**                                                                               **
** Deivith Trujillo Meza                                                         **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
  


//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}


//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 1 )  //polsador premut, muntat amb Pull-up
  {
    digitalWrite(led0,LOW);
  }
  else   //polsador no premut, muntat amb Pull-up
  {
    digitalWrite(led0,HIGH);
  }
  delay(200);  //per no estar llegint button molt ràpid
}
//********** Funcions *************************************************************

