#ifndef POLOLU_TB67H420FTG_DRIVE_H_
#define POLOLU_TB67H420FTG_DRIVE_H_

#include <Arduino.h>

class p_tb67h{
public:
    p_tb67h(uint8_t in1, uint8_t in2, byte pwm, uint8_t lo1, uint8_t lo2);
    void on(int power);
    void stop();

private:
    uint8_t _in1;
    uint8_t _in2;
    byte _pwm;
    bool _lo1;
    bool _lo2;
};

#endif