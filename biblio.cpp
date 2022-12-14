#pragma once
#include "book.h"
#include "date.h"
#include "reader.h"
#include "borrow.h"
#include "biblio.h"
#include <vector>
#include <string>
#include <iostream>

Biblio::Biblio(){
}

void Biblio::addList(Book b){
    books.push_back(b);
}

void Biblio::addAuthors(Author a){
    authors.push_back(a);
}

void Biblio::biblioBook(){
    for (int i=0; i<books.size(); i++){
        std::cout << books[i] << "\t";
    }
    std::cout << "\n";
}

void Biblio::biblioAuthor(){
    for (int i=0; i<authors.size(); i++){
        std::cout << authors[i] << "\t";
    }
    std::cout << "\n";
}