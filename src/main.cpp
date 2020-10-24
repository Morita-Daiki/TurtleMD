#include <mbed.h>

//pwms
PwmOut tb67h[3][2]{
    {PwmOut(D3), PwmOut(D6)},
    {PwmOut(D7), PwmOut(D9)},
    {PwmOut(D11), PwmOut(D12)},
};

//serial
BufferedSerial xbee(D1, D0);

//can
CAN can(D10, D2, 1000000);

//i2c
I2C i2c(D4, D5);

//sw input
BusIn sw(D13, A7, D8);

//pot
AnalogIn pot[3]{AnalogIn(A6), AnalogIn(A2), AnalogIn(A1)};

//vin
AnalogIn vcc(A0); //0.2x vcc

//vref[V]->Iout[A]
AnalogOut vref1(A5);
AnalogOut vref2(A4);
AnalogOut vref3(A3);

main()
{

  // put your setup code here, to run once:

  while (1)
  {
    // put your main code here, to run repeatedly:
  }
}