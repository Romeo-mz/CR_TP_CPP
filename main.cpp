#include <iostream>

#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"

int main()
{
    Date test(2025,5,10);

    Book b1("Pokémon", "Moi", "FR", "Adventure", test, "1000");
    bookDisplay(b1);

    return 0;
}