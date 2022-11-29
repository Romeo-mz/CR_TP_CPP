#ifndef READER_H
#define READER_H
#include <string>
#include <vector>

class Reader
{
    public:
    Reader(const std::string name = "Name", 
    const std::string surname = "Surname", 
    const int id = 0);

    int getId() const;
    std::string getSurname() const;
    std::string getName() const;


    void printReader() const;
    private:
    
    std::string _name;
    std::string _surname;
    
    int _id;
};

#endif
