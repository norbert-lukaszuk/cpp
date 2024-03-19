#include "my_classes.h"
#include <iostream>

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
    value += num;
    std::cout << "Current value: " << value << std::endl;
}