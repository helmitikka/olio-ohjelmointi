#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef   // Luodaan luokka ItalianChef, joka perii Chef-luokan
{
public:
    ItalianChef(string chefName); // konstruktori, joka alustaa italialaisen kokin nimen
    void makePasta();             // pastan valmistusfunktio
    string getName();             // haetaan kokin nimi
    ~ItalianChef();               // italialaisen kokin destruktori
};

#endif // ITALIANCHEF_H
