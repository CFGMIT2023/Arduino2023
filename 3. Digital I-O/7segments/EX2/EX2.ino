  /****************************************************************
**                                                             **
**                       Display de 7 segment                  **
**                                                             **
**                                                             **
**  NOM: Deivith Trujillo Meza                                 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11;
int tiempo= 500;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(segA, OUTPUT);
 pinMode(segB, OUTPUT);
 pinMode(segC, OUTPUT);
 pinMode(segD, OUTPUT);
 pinMode(segE, OUTPUT);
 pinMode(segF, OUTPUT);
 pinMode(segG, OUTPUT);

 digitalWrite(segA, HIGH);  //D
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, LOW);

delay(tiempo);

 digitalWrite(segA, LOW);  //E
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 delay(tiempo);

 digitalWrite(segA, HIGH);  //I
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);

 delay(tiempo);

 digitalWrite(segA, HIGH);  //V
 digitalWrite(segB, HIGH);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 delay(tiempo);

 digitalWrite(segA, HIGH);  //I
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH); 

 delay(tiempo);

 digitalWrite(segA, HIGH);  //T
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 delay(tiempo);

 digitalWrite(segA, HIGH);  //H
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);
}

void loop (
)

{

  
}
