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
        void addBook(Book b); 
        void biblioBook() const;
        void addAuthors(Author a); 
        void biblioAuthor() const;

        std::vector<Book> findBookAuthor(std::string name = "Default");

        void printBookAuthor() const;

    private:
    std::vector<Book> _books;
    std::vector<Author> _authors;

    std::vector<Book> _bookAuthor;
    Book b();
    Author a();
};

