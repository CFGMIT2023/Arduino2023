/**********************************************************************************
**                              Array de 8 LEDs                                  **
** NOM: Deivith Trujillo Meza                                                    **
**                                                                               **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino
const byte buttonPin2 = 2;     // donar nom al pin 2 de l’Arduino
const byte buttoPin3 = 3;     // donar nom al pin 3 de l’Arduino
byte buttonState2 = 0;         // per guardar l’estat en que és troba el button2
byte buttonState3 = 0;         // per guardar l’estat en que és troba el button3
unsigned long tiempo = 300;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada  
  pinMode(buttoPin3, INPUT); // definir el pin 3 com una entrada 
}
//********** Loop *****************************************************************
void loop()
{
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttoPin3);
  if (buttonState2==0)
{ 
 digitalWrite(led0, HIGH);
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 delay(500);

 digitalWrite(led0, LOW);
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
 
 delay(500);
} 
else if(buttonState3==0)
{
 digitalWrite(led0, HIGH);
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);

 delay(500);

 digitalWrite(led0, LOW);
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
 
 delay(500);
}
else
{
 digitalWrite(led0, HIGH);  
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);

 delay(tiempo);

 digitalWrite(led0, HIGH);  
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 delay(tiempo);

 digitalWrite(led0, HIGH);  
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);

 delay(tiempo); 

 digitalWrite(led0, LOW);  //Fila 4
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 delay(tiempo);

 digitalWrite(led0, LOW);  //Files 5 i 6
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 delay(tiempo);

 digitalWrite(led0, LOW);  //Fila 7
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 delay(tiempo);

 digitalWrite(led0, HIGH);  //Fila 8
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);

 delay(tiempo);

 digitalWrite(led0, HIGH);  //Fila 9
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 delay(tiempo);

 digitalWrite(led0, HIGH);  //Fila 10
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);

 delay(tiempo);

 digitalWrite(led0, LOW);  //Files 11 i 12
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 delay(tiempo);
}
}
 
//********** Funcions *************************************************************

