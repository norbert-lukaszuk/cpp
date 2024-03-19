#include "my_classes.h"
DHT dht(2, 25);
int main()
{
    int num_1;

    num_1 = dht.begin(125);

    return 0;
}