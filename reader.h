#ifndef READER_H
#define READER_H
#include <string>

class Reader
{
    public:
    Reader(std::string name = "Name", 
    std::string surname = "Surname", 
    const int id = 0);

    int getId() const;
    std::string getSurname() const;
    std::string getName() const;
    void updateName(std::string name);
    void updateSurname(std::string surname);


    void printReader() const;
    private:
    
    std::string _name;
    std::string _surname;
    
    int _id;
};

#endif
