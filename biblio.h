#pragma once
#include "book.h"
#include "borrow.h"
#include <vector>
#include <string>
#include <iostream>

class Biblio 
{
    public:
        Biblio();
        void addBook(Book b); 
        void biblioBook() const;
        void addAuthors(Author a); 
        void biblioAuthor() const;

        std::vector<Book> findBookAuthor(std::string name = "Default");
        void findBorrow(Borrow& borrow);
        
        void printBookAuthor() const;
        void printBorrow();

    private:
    std::vector<Book> _books;

    std::vector<Author> _authors;

    std::vector<std::string> _borrows;
    
    std::vector<Book> _bookAuthor;


};

