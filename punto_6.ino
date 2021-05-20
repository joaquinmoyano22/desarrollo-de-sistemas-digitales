const int pin = 2;
int LEDVERDE=11;
int tiempo= 5000;

void setup()
{
   pinMode(LEDVERDE, OUTPUT);
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pin), fpulsador, RISING);
}
 
void loop()
{
  digitalWrite(11, HIGH);
  delay(tiempo);
  digitalWrite(11, LOW);
  delay(2000);
  
      
}
 
void fpulsador()
{
   tiempo = tiempo - 500;
}
