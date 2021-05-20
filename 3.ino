const int pin = 2;
int contador = 0;

void setup()
{
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pin), fcontador, RISING);
}
 
void loop()
{
      Serial.print("El promedio de click apretados en 3 fue de: ");
      Serial.println(contador);
  contador=0;
      delay(3000);                //agrego un delay
}
 
void fcontador()
{
   contador = contador + 1;
}
