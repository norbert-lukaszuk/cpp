#include <stdint.h>
#ifndef MY_CLASSES
#define MY_CLASSES
class DHT
{
private:
    // private values to use inside of class
    int _value_1; //<- use undescore to not conflict with arguments passed by class contructor
    int _value_2;
    int _value_3;

public:
    // contructor definition with passed on values
    DHT(int value_1, int value_2, int value_3);
    // definition of methods availible in class
    void begin(int time);
    void hello(void);
    void add(int num);
};
#endif