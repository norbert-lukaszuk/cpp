#include <stdint.h>
#ifndef MY_CLASSES
#define MY_CLASSES
class DHT
{
private:
    int value = 0;

public:
    void begin(int time);
    void hello(void);
    void add(int num);
};
#endif