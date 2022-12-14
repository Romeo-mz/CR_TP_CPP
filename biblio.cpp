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
    std::vector<std::string> books;
}

void Biblio::addList(Book b){
    books.push_back(b);
}

void Biblio::borrowedBook(Book b){

}

void Biblio::biblioBook(){
    for (int i=0; i<books.size(); i++){
        std::cout << books[i] << "\t";
    }
    std::cout << "\n";
}