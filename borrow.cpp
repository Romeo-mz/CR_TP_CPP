#include "borrow.h"
#include "date.h"
#include "book.h"
#include <assert.h> 
#include <iostream>

//Constructeur qui increment l'index pour chaque nouveau reader

Borrow::Borrow(const Reader& reader, const Book& book, const Date& date): _date(date), _book(book), _reader(reader)
{   
    bool status = isBorrow(book);
    assert(status && "Livre est déjà emprunté");

    addReader();
    addBook();
    ++_index;
}

//Rajoute l'identifiant du lecteur actuel a _idList qui est l'historique des identifiants

void Borrow::addReader()
{
    _idList.push_back(_reader.getId());
}
//Rajoute l'identifiant du livre dans l'historique et dans les emprunts actuel
void Borrow::addBook()
{
    _isbnList.push_back(_book.bookISBN());
    _borrowList.push_back(_book.bookISBN());
}

//Cherche dans la liste des emprunts si le livre est emprunté ou non
void Borrow::returnBook()
{
    for(int i = 0; i < _borrowList.size(); i++)
    {
        if (_borrowList.at(i) == _book.bookISBN() )
        {
            _borrowList.erase(_borrowList.begin() + i); //supprime la i eme valeur 
        }
    }
}

//Affiche le livre emprunté par le lecteur
void Borrow::printBorrow(const Reader& reader)
{
    std::cout << "M : " << reader.getSurname() << " " << reader.getName() << " with Id " << _idList.at(_index) <<
    " has borrowed " << _book.bookTitle() << " the " << toString(_date) << std::endl;

}

//Test si l'identifiant du livre a emprunté est dans la list des emprunts
bool Borrow::isBorrow(const Book& book)
{
    for(int i = 0; i < _borrowList.size(); i++)
    {
        if (_borrowList.at(i) == _book.bookISBN() )
        {
            return false;
        }
        else
        {
            return true;
        }    
    }
}