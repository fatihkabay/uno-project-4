int i;
void setup()
{
    for (i=2; i<=8; i++) pinMode(i, OUTPUT);
}
void loop()
{
  for (i=2; i<=8; i++) {digitalWrite(i, 1); delay(100);}
  for (i=2; i<=8; i++) {digitalWrite(i, 0); delay(100);}
  
}