#include "reader.h"
#include <iostream>

Reader::Reader(const std::string name, const std::string surname, const int id): _name(name), _surname(surname), _id(id)
{

}

//Méthode pour récupérer le prénom du lecteur
std::string Reader::getName() const
{
    return _name;
}

//Méthode pour récupérer le nom du lecteur
std::string Reader::getSurname() const
{
    return _surname;
}

//Méthode pour récupérer l'identifiant du lecteur
int Reader::getId() const
{
    return _id;
}

//Méthode pour modifier le prénom du lecteur
void Reader::updateName(std::string name){
    _name = name;
}

//Méthode pour modifier le nom du lecteur
void Reader::updateSurname(std::string surname){
    _surname = surname;
}

//Méthode pour afficher les infos sur le lecteur
void Reader::printReader() const
{
    std::cout  << "Name : " << getName() << "\nSurname : " << getSurname() << "\nId : " << getId() << std::endl;
}
