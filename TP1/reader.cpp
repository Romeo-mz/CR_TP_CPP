#include "reader.h"
#include <iostream>

//Création du constructeur
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

//Surcharge de l'opérateur << pour afficher les infos du lecteur
std::ostream& operator<< (std::ostream& os, Reader const& reader)
{
   os 
   << R"(
  _____                   _               _          __       
 |  __ \                 | |             (_)        / _|      
 | |__) | ___   __ _   __| |  ___  _ __   _  _ __  | |_  ___  
 |  _  / / _ \ / _` | / _` | / _ \| '__| | || '_ \ |  _|/ _ \ 
 | | \ \|  __/| (_| || (_| ||  __/| |    | || | | || | | (_) |
 |_|  \_\\___| \__,_| \__,_| \___||_|    |_||_| |_||_|  \___/ 
   )" << "\n"
    << "Name : " << reader.getName() << ", Surname : " << reader.getSurname() << "\n" 
    << "Id : " << reader.getId() << std::endl;

    return os;
}