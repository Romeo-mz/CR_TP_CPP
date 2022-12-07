#include "borrow.h"
#include "date.h"
#include "book.h"
#include <assert.h> 
#include <iostream>

//Constructeur qui increment l'index pour chaque nouveau reader

Borrow::Borrow(const Reader& reader, Book& book, Date date): _date(date), _book(book), _reader(reader)
{   
 
    bool status = isBorrow(book);
    assert(status && "Livre est déjà emprunté");
    addReader();
    addBook(book);
    ++_index;
}

//Rajoute l'identifiant du lecteur actuel a _idList qui est l'historique des identifiants

void Borrow::addReader()
{
    _idList.push_back(_reader.getId());
}

//Rajoute l'identifiant du livre dans l'historique et dans les emprunts actuel
void Borrow::addBook(Book& book)
{
    _isbnList.push_back(book.getISBN());
    book.setIsBorrowed(true);
}

//Cherche dans la liste des emprunts si le livre est emprunté ou non
void Borrow::returnBook(Book& book)
{
    book.setIsBorrowed(false);
}

//Affiche le livre emprunté par le lecteur
void Borrow::printBorrow(const Reader& reader)
{
    std::cout << "M : " << reader.getSurname() << " " << reader.getName() << " with Id " << _idList.at(_index) <<
    " has borrowed " << _book.getTitle() << " the " << toString(_date) << std::endl;

}

//Test si l'identifiant du livre a emprunté est dans la list des emprunts
bool Borrow::isBorrow(Book& book)
{
    if(book.getIsBorrowed() == false)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}