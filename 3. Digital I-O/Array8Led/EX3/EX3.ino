
/**********************************************************************************
**                                 array de leds                                  **
**                                                                               **
**                                                                               **
** NOM: Deivith Trujillo Meza                                   DATA: 10/03/2023 **
**********************************************************************************/
//******************************** INCLUDE ****************************************


//******************************* VARIABLES ***************************************
const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 50;         // velocitat de l'acció en ms



//********************************* SETUP *****************************************

void setup() {                     //configura final de salida
 pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida

}                        


//********************************* LOOP ******************************************
void loop() {                      // inicia el bucle del programa
  digitalWrite(led0, HIGH);
  digitalWrite(led5, HIGH);
  delay(velocitat); 
  digitalWrite(led0, LOW);
  digitalWrite(led5, LOW);  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  digitalWrite(led1, HIGH);     // posar PWM del pin 5 a 0
  digitalWrite(led4, HIGH);
  delay(velocitat);
  digitalWrite(led1, LOW);
  digitalWrite(led4, LOW);
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(velocitat);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  delay(velocitat);
  digitalWrite(led1, HIGH);
  digitalWrite(led4, HIGH);
  delay(velocitat);
  digitalWrite(led1, LOW);
  digitalWrite(led4, LOW);
  delay(velocitat);
  digitalWrite(led0, HIGH);
  digitalWrite(led5, HIGH);
  
  
  
}

//******************************* FUNCIONS ****************************************


