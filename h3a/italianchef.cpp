#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string chefName) : Chef(chefName)  // ItalianChef-luokan kontruktori, parametrinä kokin nimi
{                                                           // Koska Chef-luokan muodostin ottaa parametrin, on kutsuttava ItalianChef luokan konstruktorissa tuota muodostinta
    cout << "ItalianChef " << name << " konstruktori" << endl; // tulostaa tiedon konstruktorista
}

void ItalianChef::makePasta() // funktio, joka valmistaa pastan
{
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() // haetaan ja palautetaan kokin nimi
{
    return name;
}

ItalianChef::~ItalianChef() // ItalianChef-luokan destruktori
{
    cout << "ItalianChef " << name << " destruktori" << endl; // tulostaa tiedon olion tuhoamisesta
}
