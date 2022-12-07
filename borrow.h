#ifndef BORROW_H
#define BORROW_H
#include "date.h"
#include "reader.h"
#include "book.h"
#include <vector>

class Borrow
{
    public:

    Borrow(const Reader& reader, const Book& book, const Date& date);
    
    void addReader();
    void addBook();

    void returnBook();
    
    void printBorrow(const Reader& reader);

    bool isBorrow(const Book& book);

    private:

    Book _book;
    Date _date;    
    Reader _reader;

    int _index = -1;
    std::vector <int> _idList;
    std::vector <std::string> _isbnList;
    std::vector <std::string> _borrowList;
};


#endif