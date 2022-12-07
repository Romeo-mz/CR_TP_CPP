#pragma once
#include "author.h"
#include "date.h"
#include <string>


Author::Author(int id, std::string name, std::string surname, Date d) :
    _id(id), _name(name), _surname(surname), _d(d) {
}

int Author::getID() const {
    return _id;
}

std::string Author::getName() const {
    return _name;
}

std::string Author::getSurname() const {
    return _surname;
}

std::string Author::getDate() const {
    return toString(_d);
}

void Author::updateName(std::string name){
    _name = name;
}

void Author::updateSurname(std::string surname){
    _surname = surname;
}



// HELPER

std::string authorInfo(Author a){
    return a.getName() + " " + a.getSurname();
}