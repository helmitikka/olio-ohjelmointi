/*
Harjoituksen ohjeet: https://peatutor.com/cplus/harjoitukset/h3a.php
1. Luo projekti
2. Kantaluokka Chef:
    - Luotuasi projektin, lisää siihen luokka Chef. Luo luokka Qt:n toiminnolla "Add New ...C++ Class"
    - Toteuta Chef-luokka niin, että jäsenfunktiot mukaan lukien konstruktori ja destruktori tulostavat debug tietoa ruudulle. Konstruktorille annetaan parametrina kokin nimi.
    - Luo mainissa Chef-luokasta automaattinen olio (pinomuistiin), anna kokin nimeksi Gordon Ramsay
    - Kutsu metodeja makeSalad ja makeSoup

3. Aliluokka ItalianChef:
    - Lisää luokka ItalianChef, joka perii luokan Chef
    - Toteuta ItalianChef-luokka niin, että jäsenfunktiot mukaan lukien konstruktori ja destruktori tulostavat debug tietoa ruudulle.
        - Konstruktorille annetaan parametrina kokin nimi. Metodi getName() palauttaa kokin nimen.
    - Huomaa, että koska Chef-luokan muodostin ottaa parametrin, sinun on kutsuttava ItalianChef luokan konstruktorissa tuota muodostinta
    - Luo mainissa ItalianChef-luokasta automaattinen olio (pinomuistiin), anna kokin nimeksi Anthony Bourdain
    - Kutsu metodeja makeSalad, makeSoup, makePasta ja getName (tulosta sen palauttama nimi cout:lla)
*/

#include "chef.h"
#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{
    /* Laitetaan Chef-olio omaan lohkoon (käyttämällä "{" ja "}"), jotta se myös tuhoutuu kun lohkosta poistutaan.
       Aiemmin olio luotiin ilman omaa lohkoa, jolloin Gordon Ramsayn destruktori tulostettiin vasta Anthony Bourdain dekonstruktorin jälkeen.*/
    {   // lohkon alku
    Chef chef("Gordon Ramsay"); // Luodaan Chef olio pinomuistiin ja annetaan kokin nimi Gordon Ramsay
    chef.makeSalad();           // Kutsutaan makeSalad-metodi
    chef.makeSoup();            // Kutsutaan makeSoup-metodi
    }   // lohkon loppu

    cout << endl;   // tyhjä rivinvaihto, jotta tulostukset erottuu paremmin toisistaan

    ItalianChef italianChef("Anthony Bourdain"); // Luodaan ItalianChef-olio pinomuistiin ja annetaan sille nimeksi Anthony Bourdain
    italianChef.makeSalad();    // Kutsutaan makeSalad-metodi
    italianChef.makeSoup();     // Kutsutaan makeSoup-metodi
    italianChef.makePasta();    // Kutsutaan makePasta-metodi

    cout << "name of the Italian Chef is: " << italianChef.getName() << endl; // Tulostetaan italialaisen kokin nimi

    return 0;
}
