#include "my_classes.h"
#include <iostream>
int main()
{
    DHT dht;
    DHT dht2;
    dht.begin(125);
    dht.hello();
    dht.add(12);
    dht.add(23);
    dht2.add(3);
    dht2.add(589);

    return 0;
}