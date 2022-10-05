// C++ code
//
int trig =2;
int echo=3;
void setup()
{
 Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  double a=analogRead(A1);
  Serial.print("ADC Value:");
  Serial.println(a);
  double v=a/1024;
  double volt=v*5;
  Serial.print("Temp Value:");
  Serial.println(volt);
  double x=volt-0.5;
  double t=x*100;
  Serial.print("Temperature:");
  Serial.println(t);
  if(t>40)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  digitalWrite(trig, LOW);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  float dur=pulseIn(echo, HIGH);
  float dist= (dur*0.0343)/2;
  Serial.print("distance");
  Serial.println(dist);
  if(dist>=100)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
}