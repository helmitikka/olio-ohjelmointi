/*
Harjoituksen ohjeet: https://peatutor.com/cplus/harjoitukset/h3b.php

Tavoitteena on ymmärtää, miten perivä luokka voi ylikirjoittaa kantaluokan metodin, ja nähdä polymorfismi käytännössä C++:ssa. OHJE: https://peatutor.com/cplus/index.php#overriding
Tutustu UML-kaavion symbooleihin kts. https://peatutor.com/cplus/index.php#uml.

Harjoitus 3b (perintä/ylikirjoittaminen): Ylikirjoittaminen perivässä luokassa
- Luotuasi projektin, lisää siihen kantaluokka nimeltä Animal, joka sisältää virtuaalisen metodin callOut. Tämä metodi tulostaa tekstin "Eläin ääntelee."
- Luo kantaluokasta perivä luokka nimeltä Dog, joka ylikirjoittaa metodin callOut. Ylikirjoitetun metodin tulisi tulostaa teksti "Koira haukkuu!"
- Kirjoita main-funktio, jossa luodaan Animal-luokan olio ja Dog-luokan olio.
- Kutsu molemmissa tapauksissa callOut-metodia ja varmista, että oikea viesti tulostuu.
- Varmista, että luomasi oliot tuhoutuvat.
*/

#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    // Luodaan Animal-olio ja kutsutaan callOut-metodi
    Animal* animal = new Animal();
    animal->callOut();

    // Luodaan Dog-olio ja kutsutaan sen callOut-metodia
    Animal* dog = new Dog();
    dog->callOut();

    // Vapautetaan muistissa olevat oliot ja varmistetaan että oliot tuhoutuu
    delete animal;
    delete dog;

    return 0;
}
