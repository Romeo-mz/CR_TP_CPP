#pragma once
#include "date.h"
#include "reader.h"
#include "book.h"
#include <vector>

class Borrow
{
    public:

    Borrow(const Reader& reader, Book& book, Date date = Date());
    
    void addReader(); 
    void addBook(Book& book);


    void returnBook(Book& book);
    
    void printBorrow(const Reader& reader) const;

    bool isBorrow(Book& book) const;

    private:

    Book _book;
    Date _date;    
    Reader _reader;

    int _index = -1;
    std::vector <int> _idList;
    std::vector <std::string> _isbnList;
    
};
