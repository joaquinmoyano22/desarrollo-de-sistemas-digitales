const int pin = 2;
int contador = 0;
boolean prender=false;
int estado=0;
void setup()
{
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   pinMode(13,OUTPUT);
   attachInterrupt(digitalPinToInterrupt(pin), fcontador, RISING);
}
 
void loop()
{
 
}
 
void fcontador()
{
digitalWrite(13,!prender);
prender=!prender; 
  
}
