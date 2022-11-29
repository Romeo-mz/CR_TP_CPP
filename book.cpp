#pragma once
#include "book.h"
#include "date.h"
#include <string>

Book::Book(std::string title, std::string author, std::string language, std::string type, Date d, std::string ISBN) : 
_title(title), _author(author), _language(language), _type(type), _d(d), _ISBN(ISBN) {
}

// Getters pour récupérer les variables membres de l'objet
std::string Book::bookTitle() const {
    return _title;
}

std::string Book::bookAuthor() const {
    return _author;
}

std::string Book::bookLanguage() const {
    return _language;
}

std::string Book::bookType() const {
    return _type;
}

std::string Book::bookISBN() const {
    return _ISBN;
}

// Méthode affichant les infos 
void Book::bookInfo() const {
    std::cout << _title << ", de " << _author << "; Date de parution: " << toString(_d) << "; Language: " << _language << "; Type: " << _type << "; ISBN: " 
    << _ISBN << ". \n";
}