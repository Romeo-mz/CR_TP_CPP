#pragma once
#include "book.h"
#include "date.h"
#include <string>

//Constructeur
Book::Book(std::string title, std::string author, std::string language, std::string type, Date d, std::string ISBN, bool isBorrowed) : 
_title(title), _author(author), _language(language), _type(type), _d(d), _ISBN(ISBN), _isBorrowed(isBorrowed){
}

//Méthode permettant de récupérer le titre du livre
std::string Book::getTitle() const {
    return _title;
}

//Méthode permettant de récupérer l'auteur du livre
std::string Book::getAuthor() const {
    return _author;
}

//Méthode permettant de récupérer le langage du livre
std::string Book::getLanguage() const {
    return _language;
}

//Méthode permettant de récupérer le genre du livre
std::string Book::getType() const {
    return _type;
}

//Méthode permettant de récupérer la date du livre
std::string Book::getDate() const {
    return toString(_d);
}

//Méthode permettant de récupérer l'ISBN du livre
std::string Book::getISBN() const {
    return _ISBN;
}

//Renvoie si le livre est emprunté ou non
bool Book::getIsBorrowed() const
{
    return _isBorrowed;
}

//Change la valeur de l'emprunt
void Book::setIsBorrowed(bool state) 
{
    _isBorrowed = state;
}
// HELPER 

//Helper permettant d'afficher les infos du livre
std::string bookDisplay(Book b){
    std::cout << b.getTitle() << ", by " << b.getAuthor() << "; Release Date: " 
    << b.getDate() << "; Language: " << b.getLanguage() << "; Type: " << b.getType() << "; ISBN: " 
    << b.getISBN() << ". \n";
}