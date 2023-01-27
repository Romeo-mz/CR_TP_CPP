#include "author.h"
#include "date.h"
#include <string>

//Création du constructeur
Author::Author(int id,  std::string surname, std::string name, Date d) :
    _id(id), _name(name), _surname(surname), _d(d) {
}

//Méthode pour obtenir l'id de l'auteur
int Author::getID() const {
    return _id;
}

//Méthode pour obtenir le nom de l'auteur
std::string Author::getName() const {
    return _name;
}

//Méthode pour obtenir le prénom de l'auteur
std::string Author::getSurname() const {
    return _surname;
}

//Méthode pour obtenir la date de naissance de l'auteur
std::string Author::getDate() const {
    return toString(_d);
}

//Méthode pour définir le nom
void Author::updateName(std::string name){
    _name = name;
}

//Méthode pour définir le prénom
void Author::updateSurname(std::string surname){
    _surname = surname;
}



// HELPER

//Helper pour renvoyer le nom et prénom de l'auteur
std::string authorInfo(Author a){
    return a.getName() + " " + a.getSurname();
}

//Surcharge de l'opérateur << pour afficher les informations de l'auteur
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