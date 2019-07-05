int pin = 13;
char income;
void setup()
{
pinMode(pin, OUTPUT);
Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
      case 'a':a();
      case 'b':b();
      case 'c':c();
      case 'd':d();
      case 'e':e();
      case 'f':f();
      case 'g':g();
      case 'h':h();
      case 'i':i();
      case 'j':j();
      case 'k':k();
      case 'l':l();
      case 'm':m();
      case 'n':n();
      case 'o':o();
      case 'p':p();
      case 'q':q();
      case 'r':r();
      case 's':s();
      case 't':t();
      case 'u':u();
      case 'v':v();
      case 'w':w();
      case 'x':x();
      case 'y':y();
      case 'z':z();
      case ' ':c_space();
      case '\n':w_space();
    }
  }
  delay(3000);
}


void dot()
{
digitalWrite(pin, HIGH);
delay(250);
digitalWrite(pin, LOW);
delay(250);
}
void dash()
{
digitalWrite(pin, HIGH);
delay(1000);
digitalWrite(pin, LOW);
delay(250);
}
void c_space()
{
	digitalWrite(pin,LOW);
	delay(750);
}

void w_space()
{
	digitalWrite(pin,LOW);
	delay(1750);
}
void a()
{
dot();dash();
}
void b()
{
dash();dot();dot();dot();
}
void c()
{
dash();dot();dash();dot();
}
void d()
{
dash();dot();dot();
}
void e()
{
dot();
}
void f()
{
dot();dot();dash();dot();
}
void g()
{
dash();dash();dot();
}
void h()
{
dot();dot();dot();dot();
}
void i()
{
dot();dot();
}
void j()
{
dot();dash();dash();dash();
}
void k()
{
dash();dot();dash();
}

void l()
{
dot();dash();dot();dot();
}
void m()
{
dash();dash();
}
void n()
{
dash();dot();
}
void o()
{
dash();dash();dash();
}
void p()
{
dot();dash();dash();dot();
}
void q()
{
dash();dash();dot();dash();
}
void r()
{
dot();dash();dot();
}
void s()
{
dot();dot();dot();
}
void t()
{
dash();
}
void u()
{
dot();dot();dash();
}
void v()
{
dot();dot();dot();dash();
}
void w()
{
dot();dash();dash();
}
void x()
{
dash();dot();dot();dash();
}
void y()
{
dash();dot();dash();dash();
}
void z()
{
dash();dash();dot();dot();
}
