#pragma once
#include <string>
#include <vector>
#include "date.h"

class Book {
    public: 
        Book(std::string title, std::string author, std::string language, std::string type, Date d, std::string ISBN);
        std::string bookTitle();
        std::string bookAuthor();
        std::string bookLanguage();
        std::string bookType();
        //bookDate;
        std::string bookISBN();
        void bookInfo();

    private:
        std::string _title;
        std::string _author;
        std::string _language;
        std::string _type;
        Date _d;
        std::string _ISBN;
        
};
