#pragma once
#include "book.h"
#include "date.h"
#include "reader.h"
#include "borrow.h"
#include <vector>
#include <string>
#include <iostream>

class Biblio {
    public:
        Biblio();
        void addList(Book b);
        void borrowedBook(Book b); 
        void biblioBook();

    private:
    std::vector<Book> books;
    Book b();
};

