#ifndef POLOLU_TB67H420FTG_DRIVE_H_
#define POLOLU_TB67H420FTG_DRIVE_H_

#include <Arduino.h>

class p_tb67h{
public:
    p_tb67h(uint8_t _in1, uint8_t _in2, byte _pwm);
    on();
    stop();

private:
    uint8_t _in1;
    uint8_t _in2;
    byte _pwm;
    bool _lo1;
    bool _lo2;
};

#endif