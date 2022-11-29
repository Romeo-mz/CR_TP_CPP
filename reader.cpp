#include "reader.h"
#include <iostream>

Reader::Reader(const std::string name, const std::string surname, const int id): _name(name), _surname(surname), _id(id)
{

}

std::string Reader::getName() const
{
    return _name;
}

std::string Reader::getSurname() const
{
    return _surname;
}

int Reader::getId() const
{
    return _id;
}

void Reader::printReader() const
{
    std::cout  << "Name : " << getName() << "\nSurname : " << getSurname() << "\nId : " << getId() << std::endl;
}
