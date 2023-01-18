#include "biblio.h"
#include <vector>
#include <string>
#include <iostream>

//Création du constructeur
Biblio::Biblio(){
}

//Méthode qui permet d'ajouter un livre à la liste des livres de la bibliothèque
void Biblio::addBook(Book b)
{
    _books.push_back(b);
}

//Méthode qui permet d'ajouter un auteur à la liste des auteurs de la bibliothèque
void Biblio::addAuthors(Author a)
{
    _authors.push_back(a);
}

//Méthode qui affiche les livres ajoutés dans la bibliothèque
void Biblio::biblioBook() const
{
    for (int i = 0; i < _books.size(); i++){
        std::cout << _books[i] << "\t";
    }
    std::cout << "\n";
}

//Méthode qui affiche les auteurs ajoutés dans la bibliothèque
void Biblio::biblioAuthor() const
{
    for (int i = 0; i < _authors.size(); i++){
        std::cout << _authors[i] << "\t";
    }
    std::cout << "\n";
}

//Méthode qui cherche les livres appartenant aux auteurs
std::vector<Book> Biblio::findBookAuthor(std::string name)
{
    
    for (int i = 0; i < _books.size(); i++)
    {
        if ( _books[i].getNameAuthor() ==  name)
        {
            _bookAuthor.push_back(_books[i]);
        }
    }
    return _bookAuthor;
}

//Méthode qui affiche les livres
void Biblio::printBookAuthor() const
{

    for (int i = 0; i < _bookAuthor.size(); i++)
    {
        std::cout << _bookAuthor[i] << std::endl;
    }
}

//Méthode qui permet de chercher l'ensemble des livres empruntés
std::vector<Borrow> Biblio::findBorrow()
{
    
}