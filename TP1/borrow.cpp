#include "borrow.h"
#include "date.h"
#include "book.h"
#include "biblio.h"
#include <algorithm>
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

//Méthode qui permet de mettre l'identifiant d'emprunt à false pour le retour d'un livre
void Borrow::returnBook(Book& book)
{
    book.setIsBorrowed(false);
    for(int i = 0; i < _isbnList.size(); i++ )
    {   
        if(std::find(_isbnList.begin(), _isbnList.end(), book.getISBN() ) != _isbnList.end() )
        {
            _isbnList.erase(_isbnList.begin() + i );

        }

    }
}

//Affiche le livre emprunté par le lecteur
void Borrow::printBorrow(const Reader& reader) const
{
    std::cout << "M : " << reader.getSurname() << " " << reader.getName() << " with Id " << _idList.at(_index) <<
    " has borrowed " << _book.getTitle() << " the " << toString(_date) << std::endl;
}

//Test si l'identifiant du livre a emprunté est dans la list des emprunts
bool Borrow::isBorrow(Book& book) const
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

//Renvoie la liste des identifiants des livres empruntés
std::vector<std::string> Borrow::getIsbnlist()
{
    return _isbnList;
}