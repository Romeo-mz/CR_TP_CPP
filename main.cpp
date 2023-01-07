#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"
#include "Caesar2.h"
#include "Vigenere.h"

int main()
{
    std::string message = store("sentences.txt");
    Caesar2 caesar(message, 3);
    std::cout << caesar.getMessage() << std::endl;
    caesar.encode();
    std::cout << caesar.getMessage() << std::endl;
    caesar.decode();
    std::cout << caesar.getMessage() << std::endl;

    Caesar2 caesar2("Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone.", 3);
    std::cout << caesar2.getMessage() << std::endl;
    caesar2.encode();
    std::cout << caesar2.getMessage() << std::endl;
    caesar2.decode();
    std::cout << caesar2.getMessage() << std::endl;

    std::cout << "------------ Vigenere by vector key ------------" << std::endl;

    //test de la classe Vigenere avec un vector en cléf
    std::vector<int> key{1,2,3,4};
    Vigenere vig("Test du codage Vigenere", key);
    
    //affichage du message non crypté
    std::cout << vig.getPlain() << std::endl;

    //fonction encode
    vig.encode();
    //affichage message crypté
    std::cout << vig.getCypher() << std::endl;
    
    //fonction decode
    vig.decode();
    //affichage du message décrypté
    std::cout << vig.getPlain() << std::endl;
    

    std::cout << "------------ Vigenere by text key ------------" << std::endl;
    //test de la classe Vigenere avec un texte en cléf
    Vigenere vig_t("Test du codage Vigenere", "Key encode");

    std::cout << "Plain message : " << vig_t.getPlain() << std::endl;

    //fonction encode
    vig_t.encode();
    std::cout << "Encode message : " << vig_t.getCypher() << std::endl;
     
    //fonction decode
    vig_t.decode();
    std::cout << "Decode message " << vig_t.getPlain() << std::endl;

    std::cout << "------------ Vigenere by text key and message in file ------------" << std::endl;

    //test de la classe Vigenere avec un texte en cléf et message dans fichier
    Vigenere vig_mess(message, "Key encode");

    std::cout << "Plain message : " << vig_mess.getPlain() << std::endl;

    //fonction encode
    vig_mess.encode();
    std::cout << "Encode message : " << vig_mess.getCypher() << std::endl;
     
    //fonction decode
    vig_mess.decode();
    std::cout << "Decode message " << vig_mess.getPlain() << std::endl;

    //ecriture dans ficher
    write("test.txt", vig_mess);

    std::cout << "--------------------------------------------------------------" << std::endl;
    return 0;
}