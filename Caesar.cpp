#include <iostream>
#include <string>
#include "Caesar.h"

Caesar::Caesar()
{
    _plain = "";
    _cypher = "";
}
//Utilise deux Alphabets pour naviguer de l'un à l'autre en fonction du décalage et initialiser le nouveau _plain
void Caesar::encode() 
{
    std::string alphabet[2];
    alphabet[0] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    alphabet[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int decal = 3;

    for(int i = 0; i < alphabet[0].size(); i++)
    {
        if(decal == alphabet[1].size())
        {
            decal = 0;
        }
        alphabet[1][i] = alphabet[0][decal];
        decal++;
    }


    for(int i = 0; i < _plain.size(); i++)
    {
        for(int j = 0; j < alphabet[0].size(); j++)
        {
            if(_plain[i] == alphabet[0][j])
            {
                _cypher += alphabet[1][j];
            }
        }
    }

}
//Utilise le même principe que encode mais avec l'alphabet 0 à l'envers
void Caesar::decode() 
{
    std::string alphabet[2];
    alphabet[0] ="ZYXWVUTSRQPONMLKJIHGFEDCBA";
    alphabet[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int decal = 3;

    for(int i = 0; i < alphabet[0].size(); i++)
    {
        if(decal == alphabet[1].size())
        {
            decal = 0;
        }
  
        alphabet[1][i] = alphabet[0][decal];
        decal++;
    }


    for(int i = 0; i < _cypher.size(); i++)
    {
        for(int j = 0; j < alphabet[0].size(); j++)
        {
            if(_cypher[i] == alphabet[0][j])
            {
                _plain += alphabet[1][j];
            }
        }
    }

}