#include "Car.h" // Car-luokan määrittelyt
#include <iostream>

using namespace std;

void Car::printData() const          // tulostaa auton merkin, mallin ja valmistusvuoden.
{
    cout << "Auton tiedot: " << brand << " " << model << " " << yearModel << endl;
}

void Car::setBrand(string brandName) // asettaa auton merkin
{
    brand = brandName;
}

void Car::setModel(string modelName) // asettaa auton mallin
{
    model = modelName;
}

void Car::setYearModel(int year)     // asettaa auton valmistusvuoden
{
    yearModel = year;
}

/* Muistiinpanoja:
- Metodit: printData(), setBrand(string), setModel(string), setYearModel(int)
- luokan nimi :: metodin nimi
- const määre aiheuttaa sen, ettei metodien sisällä voida muuttaa muuttujien arvoja
*/
