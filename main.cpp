#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"

int main()
{
    Date d1(12, 25, 2020);
    Reader r1("Adil", "Amoura", 1);
    Book b1("Little Christmas Tale", "Inconnu", "Français", "Enfant", d1, "10000");

    b1.bookInfo();
    r1.printReader();

    std::cout << "\n";
    r1.updateName("Adila");
    r1.updateSurname("Moura");
    r1.printReader();
    return 0;
}