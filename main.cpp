#include <iostream>

#include "date.h"
#include "reader.h"

int main()
{
    Date test(5,10,2025);
    std::cout << "date : " << toString(test) << std::endl;

    Reader Bob("Jean", "Cule", 1);
    Bob.printReader();

    return 0;
}