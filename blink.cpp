#include <Arduino.h>
#include <blink.h>

Blink::Blink(int pin){
	pinMode(pin,OUTPUT);
	pinNumber = pin;
}

void Blink::blink(bool value){
	if(value == true){
	digitalWrite(pinNumber,HIGH);
	delay(1000);
	digitalWrite(pinNumber,LOW);
	delay(1000);
	}
	else{
	digitalWrite(pinNumber,LOW);
	}
}

void Blink::blink(bool value, int blinkLength){
	if(value == true){
	for(int a=0;a<=255;a++){
	analogWrite(pinNumber,a);
    delay(blinkLength);
	}
	for(int a=255;a>=0;a--){
	analogWrite(pinNumber,a);
    delay(blinkLength);
	}
	}else{
	digitalWrite(pinNumber,LOW);
	}
}

void Blink::blink(bool value, int blinkLength, int blinkLoops){
	if(value == true){
for(int i=blinkLoops;i>=0;i--){
analogWrite(pinNumber,i);
delay(blinkLength);
}
for (int i=0;i<=blinkLoops;i++){
analogWrite(pinNumber,i);
delay(blinkLength);
}
}else{
digitalWrite(pinNumber,LOW);
}
}
	
	