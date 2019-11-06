#include <Arduino.h>
#include "p_tb67h.h"

p_tb67h::p_tb67h(uint8_t in1, uint8_t in2, byte pwm, bool lo1, bool lo2){
    _in1 = in1;
    _in2 = in2;
    _pwm = pwm;
    _lo1 = lo1;
    _lo2 = lo2;
    pinMode(in1,OUTPUT);
    pinMode(in2,OUTPUT);
    pinMode(pwm,OUTPUT);
    pinMode(lo1,INPUT);
    pinMode(lo2,INPUT);
}

void p_tb67h::on(int power){
    if(power>255){
        power = 255;
    }
    else if(power<-255){
        power = -255;
    }

    if(power>0){
        digitalWrite(_in1,HIGH);
        digitalWrite(_in2,LOW);
        analogWrite(_pwm,power);
    }else{
        digitalWrite(_in1,LOW);
        digitalWrite(_in2,HIGH);
        analogWrite(_pwm,-1*power);
    }
}

void p_tb67h::stop(){
    digitalWrite(_in1,LOW);
    digitalWrite(_in2,LOW);
    analogWrite(_pwm,0);
}