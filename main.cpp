#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"

int main()
{
    Date test(2025,5,10);
    Date birth(2002,11,12);
    Author a(10, "Adil", "Amoura", birth);
    std::cout << authorInfo(a);
    std::cout << "\n";

    Book b1("Pokémon", a, "FR", "Adventure", test, "1000");
    b1.getDate();
    bookDisplay(b1);

    return 0;
}