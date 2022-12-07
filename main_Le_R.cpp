#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"

int main()
{
    Date test(5,10,2025);
    std::cout << "date : " << toString(test) << std::endl;

    Reader Jhonny("Jhonny", "Halliday", 1);
    Jhonny.printReader();
    Book Asterix("Asterix","Auteur", "FR", "aventure", test, "150");
    Borrow emprunt(Jhonny, Asterix, test);


    Reader Jul("Julien", "Marie", 2);
    Book Tintin("Tintin","Auteur", "FR", "aventure", test, "180");
    Borrow emprunt2(Jul, Tintin, test);

    Reader Bob("Bob", "Bob", 3);
    Borrow emprunt3(Bob, Tintin, test);

   
    emprunt2.printBorrow(Jul);
    emprunt3.printBorrow(Bob);

    emprunt.printBorrow(Jhonny);
    
    return 0;
}