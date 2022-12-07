#pragma once
#include <string>
#include <vector>
#include "date.h"

class Book {
    public: 
        Book(std::string title = "Title", std::string author = "Author", std::string language = "Language", std::string type = "Type", 
        Date d = Date(), std::string ISBN = "0000");
        std::string bookTitle() const;
        std::string bookAuthor() const;
        std::string bookLanguage() const;
        std::string bookType() const;
        std::string bookISBN() const;
        void bookInfo() const;

    private:
        std::string _title;
        std::string _author;
        std::string _language;
        std::string _type;
        Date _d;
        std::string _ISBN;
        
};
