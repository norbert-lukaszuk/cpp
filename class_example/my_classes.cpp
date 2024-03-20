#include "my_classes.h"
#include <iostream>
// constructor of DHT class that passes start arguments when creating object from class
DHT::DHT(int value_1, int value_2, int value_3)
{
    _value_1 = value_1;
    _value_2 = value_2;
    _value_3 = value_3;
}
void DHT::begin(int time)
{
    std::cout << time * 60;
    std::cout << std::endl;
}
void DHT::hello(void)
{
    std::cout << "Hello world";
    std::cout << std::endl;
}
void DHT::add(int num)
{
    _value_1 += num;
    _value_3 -= num;
    std::cout << "Current value_1: " << _value_1 << std::endl;
    std::cout << "Current value_3: " << _value_3 << std::endl;
}