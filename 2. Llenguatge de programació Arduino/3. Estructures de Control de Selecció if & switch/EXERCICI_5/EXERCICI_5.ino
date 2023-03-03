float tempAigua = 80  ;
float A = 3.5;
float B = 6.5;
float C = 11.1;
float D = 17.7;
float E = 38.2;
float F = 43.1;
float G = 43.2;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  
if (tempAigua < A )
 Serial.print ("A");
else if (tempAigua > A; tempAigua < B )
 Serial.print ("B");
else if (tempAigua > B; tempAigua < C)
 Serial.print ("C");
else if (tempAigua > C; tempAigua < D)
 Serial.print ("D");
else if (tempAigua > D; tempAigua < E)
 Serial.print ("E");
else if (tempAigua <= F)
 Serial.print ("F");
else if (tempAigua >= G)
 Serial.print ("G");

  } 


//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}