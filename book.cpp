#pragma once
#include "book.h"
#include "date.h"
#include <string>

Book::Book(std::string title, std::string author, std::string language, std::string type, Date d, std::string ISBN) : 
_title(title), _author(author), _language(language), _type(type), _ISBN(ISBN) {
}

std::string Book::bookTitle(){
    return _title;
}

std::string Book::bookAuthor(){
    return _author;
}

std::string Book::bookLanguage(){
    return _language;
}

std::string Book::bookType(){
    return _type;
}

std::string Book::bookISBN(){
    return _ISBN;
}

void Book::bookInfo(){
    std::cout << _title << ", de " << _author << "; Language: " << _language << "; Type: " << _type << "; ISBN: " << _ISBN << ". \n";
}