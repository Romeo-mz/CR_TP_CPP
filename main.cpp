#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"

int main()
{
    Date test(5,10,2025);
    std::cout << "date : " << toString(test) << std::endl;

    Reader Bob("Jean", "Cule", 1);
    Bob.printReader();

    Borrow emprunt(Bob,test);
    emprunt.printBorrow(Bob);

    return 0;
}