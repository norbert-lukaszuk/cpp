#include <stdint.h>
#ifndef MY_CLASSES
#define MY_CLASSES
class DHT
{
public:
    DHT(uint8_t pin, uint8_t type, uint8_t count = 0);
    int begin(uint8_t time);
};
#endif