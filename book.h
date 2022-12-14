#pragma once
#include <string>
#include <vector>
#include "date.h"
#include "author.h"

class Book {
    public: 
        Book(std::string title = "Title", Author a = Author(), std::string language = "Language", std::string type = "Type", 
        Date d = Date(), std::string ISBN = "0000", bool isBorrowed = false);
        std::string getTitle() const;
        std::string getAuthor() const;
        std::string getLanguage() const;
        std::string getType() const;
        std::string getDate() const;
        std::string getISBN() const;
        void bookInfo() const;

        void setIsBorrowed(bool state);
        bool getIsBorrowed() const;
        
    private:
        std::string _title;
        Author _a;
        std::string _language;
        std::string _type;
        Date _d;
        std::string _ISBN;
        bool _isBorrowed;

        friend std::ostream& operator<< (std::ostream& os, Book const& book);
};

void bookDisplay(Book b);
