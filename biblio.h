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
        void biblioBook();
        void addAuthors(Author a); 
        void biblioAuthor();

    private:
    std::vector<Book> books;
    std::vector<Author> authors;
    Book b();
    Author a();
};

