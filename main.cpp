#include <iostream>
#include "author.h"
#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"
#include "biblio.h"

int main()
{
    //Création de différentes dates à l'aide de la classe Date

    Date da1(2002, 6, 6);
    Date da2(2002, 4, 25);
    Date da3(1987, 12, 25);
    Date da4(1975, 1, 1);
    Date db1(2022, 12, 14);
    Date db2(2022, 11, 15);
    Date db3(2021, 12, 25);
    Date db4(2020, 6, 10);
    Date db5(2021, 7, 12);
    Date db6(2022, 8, 12);
    Date db7(2012, 5, 7);
    Date db8(2015, 5, 8);
    Date db9(2018, 5, 8);
    Date db10(2021, 4, 11);
    Date db11(2011, 11, 11);
    Date db12(2020, 2, 14);

    //Création de différents auteurs à l'aide de la classe Author

    Author a1(1, "Nolane", "Delille", da1);
    Author a2(2, "Adil", "Amoura", da2);
    Author a3(3, "Bobby", "Bob", da3);
    Author a4(4, "John", "John", da4);
    Reader r1("Adila", "Moura", 1);
    Reader r2("Emmanuel", "Macron", 2);
    Reader r3("Ptit", "Louis", 3);
    Reader r4 ("Maxence", "Contant", 4);

    //Création de différents livres à l'aide de la classe Book

    Book b1("Theories of Subquantum Computing", a1, "EN", "Computer Science", db1, "0001", false);
    Book b2("Why AI is cooler than Humans (or not)", a1, "EN", "Computer Science", db2, "0002", false);
    Book b3("Contes du Petit Papa Noël", a2, "FR", "Children", db3, "0011", false);
    Book b4("Pokémon: Ultimate", a2, "FR", "Adventure", db4, "0012", false);
    Book b5("Pokémon: Next Generation", a2, "FR", "Adventure", db5, "0013", false);
    Book b6("Pokémon: Next Next Generation", a2, "FR", "Adventure", db6, "0014", false);
    Book b7("The Cosmic Knight: The Beginning", a3, "EN", "Sci-Fantasy", db7, "0021", false);
    Book b8("The Cosmic Knight: The Sword of Destiny", a3, "EN", "Sci-Fantasy", db8, "0022", false);
    Book b9("The Cosmic Knight: The Dead King", a3, "EN", "Sci-Fantasy", db9, "0023", false);
    Book b10("The Cosmic Knight: The Last War", a3, "EN", "Sci-Fantasy", db10, "0024", false);
    Book b11("Die Grundlagen von C++", a4, "DE", "Computer Science", db11, "0031", false);
    Book b12("Wie man ein Programmierprofi wird", a4, "DE", "Computer Science", db12, "0032", false);

    ///////////////////////////////

    //Création de la bibliothèque et manipulation de celle-ci

    Biblio bib;

    //Ajout des différents livres dans la bibliothèque

    bib.addBook(b1);
    bib.addBook(b2);
    bib.addBook(b4);
    bib.addBook(b11);

    //Affichage des différents livres ajoutés dans la bibliothèque

    bib.biblioBook();

    //Ajout des différents auteurs dans la bibliothèque

    bib.addAuthors(a1);
    bib.addAuthors(a2);
    
    //Affichage des différents auteurs dans la bibliothèque

    bib.biblioAuthor();

    //Cherche et affiche les livres fait par Nolane
    bib.findBookAuthor("Delille");
    bib.printBookAuthor();

    //Ajout des différents emprunts dans la bibliothèque
    Borrow borrow1(r1,b1,da1);
    borrow1.addBook(b1);
    borrow1.addBook(b2);
    bib.findBorrow(borrow1);
    bib.printBorrow();


    return 0;
}