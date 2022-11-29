#include <iostream>

#include "date.h"

int main()
{
    Date test(5,10);
    std::cout << "a day: " << toString(test) << std::endl;

    return 0;
}