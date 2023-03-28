 /****************************************************************
**                                                             **
**                          TÍTOL:                             **
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
int t= 500;
int n = -1;
boolean stop = HIGH;
const byte buttonPin1 = 2; 
//************************* SETUP *******************************
void setup ()
 {              // configura el final de la salida
 pinMode(segA, OUTPUT);
 pinMode(segB, OUTPUT);
 pinMode(segC, OUTPUT);
 pinMode(segD, OUTPUT);
 pinMode(segE, OUTPUT);
 pinMode(segF, OUTPUT);
 pinMode(segG, OUTPUT);
 pinMode (buttonPin1, INPUT);
}

void loop ()

{
  if (digitalRead(buttonPin1) == false)
  {
    stop = !stop; 
    delay (500);
  }
  if (stop == HIGH)
  {
    n = n + 1;
    if (n == 10) n = 0;
  }


switch (n)

{
  case 0:
 digitalWrite(segA, LOW);  //0
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);
break;

case 1:
 digitalWrite(segA, HIGH);  //1
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);
break;

case 2:
 digitalWrite(segA, LOW);  //2
 digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, LOW);
break;
 
case 3:
 digitalWrite(segA, LOW);  //3
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, LOW);

 break;
 
case 4:

 digitalWrite(segA, HIGH);  //4
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW); 

 break;
 
case 5:

 digitalWrite(segA, LOW);  //5
 digitalWrite(segB, HIGH);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 break;
 
case 6:

 digitalWrite(segA, HIGH);  //6
 digitalWrite(segB, HIGH);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 break;
 
case 7:

 digitalWrite(segA, LOW);  //7
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 break;
 
case 8:

 digitalWrite(segA, LOW);  //8
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 break;
 
case 9:

 digitalWrite(segA, LOW);  //9
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);
 break;

} 
delay (t); 
}