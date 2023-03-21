/****************************************************************
**                                                             **
**                      Array de 8 leds                        **
**                                                             **
**                                                             **
**  NOM: Deivith Trujillo Meza                                 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte led =  12;
int LED;
//************************* SETUP *******************************
void setup() { 
pinMode(led, OUTPUT);
for (LED = 0; LED<31; LED++)
{
digitalWrite(led, HIGH);
delay(300);
digitalWrite(led, LOW);
delay(300);
Serial.begin(9600);
Serial.println (LED); 
}
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
}
//************************** FUNCTIONS **************************