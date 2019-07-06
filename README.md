# ZCNI

## 0702

### 学习内容

![tinkercad](https://www.tinkercad.com/)

## 0703

### Morse
```c
#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
```
## 0704

### car
![](https://github.com/zhicni/arduino_learn/blob/master/car/car.png)
### cd4511
![](https://github.com/zhicni/arduino_learn/blob/master/cd4511/d4511.png)
## 0705

### Morse_new
