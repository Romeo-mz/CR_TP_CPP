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

std::ostream& operator<<(std::ostream& os, Author const& author)
{
    os <<
    R"(
                  _    _                    _          __       
     /\          | |  | |                  (_)        / _|      
    /  \   _   _ | |_ | |__    ___   _ __   _  _ __  | |_  ___  
   / /\ \ | | | || __|| '_ \  / _ \ | '__| | || '_ \ |  _|/ _ \ 
  / ____ \| |_| || |_ | | | || (_) || |    | || | | || | | (_) |
 /_/    \_\\__,_| \__||_| |_| \___/ |_|    |_||_| |_||_|  \___/ 
                                                                
    )" << "\n"
    << "Name : " << author.getName() << " " << author.getSurname() << "\n" 
    << "Birth Date : " << author.getDate() << "\n"
    << "Id : " << author.getID() << std::endl;

    return os;
}