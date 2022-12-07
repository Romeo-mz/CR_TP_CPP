#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"

int main()
{
    Date test(2025,10,5);
    std::cout << "date : " << toString(test) << std::endl;

    Reader Jhonny("Jhonny", "Halliday", 1);
    Jhonny.printReader();
    Book Asterix("Asterix","Auteur", "FR", "aventure", test, "150");
    Borrow emprunt(Jhonny, Asterix, test);
    emprunt.printBorrow(Jhonny);

    std::cout << Asterix.getIsBorrowed() << std::endl;

    Reader Jul("Julien", "Marie", 2);
    Book Tintin("Tintin","Auteur", "FR", "aventure", test, "180", false); 
    Borrow emprunt2(Jul, Tintin, test);

    emprunt2.printBorrow(Jul);

    Reader Bob("Bob", "Bob", 3);
    Borrow emprunt3(Bob, Tintin, test);
    
    emprunt3.printBorrow(Bob);

    
    
    return 0;
}