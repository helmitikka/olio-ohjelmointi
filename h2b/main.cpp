/* Harjoituksen ohjeet: https://peatutor.com/cplus/harjoitukset/h2b.php

Harjoitus2b - oliolista
Luo C++-ohjelma, jossa määritellään luokka nimeltä Car.
Jäsenmuuttujat: brand, model, yearModel
Metodit: printData(), Car(string, string, int)
Pääohjelmassa:
    - Luo vektori nimeltään carList ja luo kolme Car-luokan oliota. Lisää oliot listaan.
    - Tulosta listan toisen alkion tiedot.
    - Tulosta kaikkien autojen tiedot käyttämällä for-silmukkaa. */

#include <iostream>
#include "Car.h"
#include <vector>
using namespace std;

int main() {
    vector<Car> carList;  // vektori carList, joka listaa Car-oliot pinoon

    Car car0("Chevrolet", "Kalos", 2005);
    Car car1("Toyota", "Carina E", 2010);
    Car car2("Toyota", "Hilux", 2015);

    carList.push_back(car0);  // jokainen auto lisätään listan loppuun (push back)
    carList.push_back(car1);
    carList.push_back(car2);

    cout << "Listan toisen alkion tiedot:" << endl;
    carList[1].printData();

    cout << endl; // ylimääräinen rivinvaihto

    // Tulostetaan kaikkien autojen tiedot käyttäen for-silmukkaa
    cout << "Kaikkien autojen tiedot: " << endl;
    for (int i=0; i<=2; i++)
    {
        carList[i].printData();
    }
    cout << endl; // ylimääräinen rivinvaihto
    return 0;
}

