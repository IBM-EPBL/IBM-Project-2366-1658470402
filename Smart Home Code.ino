// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int m=digitalRead(2);
  Serial.print("Motion Detection:");
  double a=analogRead(A1);
  Serial.print("ADC Value: ");
  Serial.println(a);
  double v=a/1024;
  double tv=v*5;
  Serial.print("Temp. in Voltage:");
  Serial.println(tv);
  double o=tv-0.5;
  double t=o*100;
  Serial.print("Temperature:");
  Serial.println(t);
  if(m==0)
  {
    Serial.println("No");
    digitalWrite(7, HIGH);
    digitalWrite(4, LOW);
  }
  else
  {
    Serial.println("Yes");
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);
  }
  if(t>40)
  {
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
}