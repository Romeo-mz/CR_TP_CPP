#ifndef BORROW_H
#define BORROW_H
#include "Date.h"
#include "reader.h"
#include <vector>

class Borrow
{
    public:

    Borrow(const Reader& reader, const Date& date);
    
    void addReader(const Reader& reader);
    void addBook();

    void printBorrow(const Reader& reader);

    private:

    Date _date;    
    int _index = -1;
    std::vector <int> _idList;
    std::vector <std::string> _isbn;

};

#endif