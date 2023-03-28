/**********************************************************************************
**                                 TÍTOL                                         **
**                          Velocitat de 8 leds                                  **
**                                                                               **
** NOM: Deivith Trujillo Meza                                                    **
**********************************************************************************/
//******************************** INCLUDE ****************************************


//******************************* VARIABLES ***************************************
const byte led0 = 5;
const byte led1 = 6;
const byte led2 = 7;
const byte led3 = 8;
const byte led4 = 9;
const byte led5 = 10;
const byte led6 = 11;
const byte led7 = 12;
const byte pot0 = A0;
unsigned long velocidad = 50;
int valPot0;
int estat = 0;

//************************* SETUP *******************************
void setup() 
{
Serial.begin(9600);          
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(pot0, INPUT);
}
//************************* LOOP ********************************
void loop() 
{               
  valPot0 = analogRead(pot0);
  Serial.println(valPot0);
  velocidad = 10 + valPot0;
  delay(velocidad);
  switch (estat)
  {
    case 0:
      digitalWrite(led0, HIGH); 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      estat = 1;
      break;
    case 1:
      digitalWrite(led0, HIGH); 
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      estat = 2;
      break;

    case 2:
      digitalWrite(led0, HIGH); 
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      estat = 3;
      break;

    case 3:
      digitalWrite(led0, HIGH); 
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      estat = 4;
      break;

    case 4:
      digitalWrite(led0, LOW); 
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, LOW);
      estat = 5;
      break;

    case 5:
      digitalWrite(led0, LOW); 
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      estat =6;
      break;

    case 6: 
      digitalWrite(led0, LOW); 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      estat = 7;
      break;

    case 7:
      digitalWrite(led0, LOW); 
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      estat = 8;
      break;

    case 8:
      digitalWrite(led0, LOW); 
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, LOW);
      estat = 9;
      break;
  
    case 9:
      digitalWrite(led0, HIGH); 
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      estat = 10;
      break;

    case 10:
      digitalWrite(led0, HIGH); 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      estat = 11;
      break;

    case 11:
      digitalWrite(led0, LOW); 
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      estat = 0;
      break;
}
}
//************************** FUNCTIONS **************************