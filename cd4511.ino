void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}
int income;
int num;
int i;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
      case '0':digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,0);digitalWrite(5,0);break;
      case '1':digitalWrite(2,1);digitalWrite(3,0);digitalWrite(4,0);digitalWrite(5,0);break;
      case '2':digitalWrite(2,0);digitalWrite(3,1);digitalWrite(4,0);digitalWrite(5,0);break;
      case '3':digitalWrite(2,1);digitalWrite(3,1);digitalWrite(4,0);digitalWrite(5,0);break;
      case '4':digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,1);digitalWrite(5,0);break;
      case '5':digitalWrite(2,1);digitalWrite(3,0);digitalWrite(4,1);digitalWrite(5,0);break;
      case '6':digitalWrite(2,0);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,0);break;
      case '7':digitalWrite(2,1);digitalWrite(3,1);digitalWrite(4,1);digitalWrite(5,0);break;
      case '8':digitalWrite(2,0);digitalWrite(3,0);digitalWrite(4,0);digitalWrite(5,1);break;
      case '9':digitalWrite(2,1);digitalWrite(3,0);digitalWrite(4,0);digitalWrite(5,1);break;
    }
  }
  delay(1000);
}
