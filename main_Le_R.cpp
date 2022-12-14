#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"
#include "author.h"

int main()
{
    Date test(2025,10,5);
    //std::cout << "date : " << toString(test) << std::endl;
    Author a(1, "Tintin", "Tintin", test);

    Reader Jhonny("Jhonny", "Halliday", 1);
    std::cout << Jhonny << std::endl;

    Book Asterix("Asterix",a, "FR", "aventure", test, "150");
    Borrow emprunt(Jhonny, Asterix, test);
    emprunt.printBorrow(Jhonny);

    std::cout << Asterix.getIsBorrowed() << std::endl;

    Reader Jul("Julien", "Marie", 2);
    Book Tintin("Tintin",a, "FR", "aventure", test, "180", false); 
    Borrow emprunt2(Jul, Tintin, test);

    std::cout << Tintin << std::endl;

    
    return 0;
}