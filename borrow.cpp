#include "borrow.h"
#include "date.h"
#include <iostream>

Borrow::Borrow(const Reader& reader, const Date& date): _date(date)
{
    addReader(reader);
    ++_index;
}

void Borrow::addReader(const Reader& reader)
{
    _idList.push_back(reader.getId());
}

void Borrow::printBorrow(const Reader& reader)
{
    std::cout << "M : " << reader.getSurname() << " " << reader.getName() << " with Id " << _idList.at(_index) <<
    " has borrowed " << " the " << toString(_date) << std::endl;

}