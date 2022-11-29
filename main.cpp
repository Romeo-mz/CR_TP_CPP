#include <iostream>

#include "date.h"

int main()
{
    Date test(5,10,2025);
    std::cout << "date : " << toString(test) << std::endl;

    return 0;
}