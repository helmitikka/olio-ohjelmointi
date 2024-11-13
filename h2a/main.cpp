/*
Harjoituksen ohjeet: https://peatutor.com/cplus/harjoitukset/h2a.php
Vaihe 1: Car-luokka
    Pääohjelmassa:
    - Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi.
    - Tulosta auton tiedot käyttämällä printData()-metodia.

Vaihe 2: Rectangle-luokka
    Jäsenmuuttujat:
    - width: reaaliluku(double), joka määrittää suorakulmion leveyden.
    - height: reaaliluku(double), joka määrittää suorakulmion korkeuden.
    Metodit:
    - getArea(): laskee ja palauttaa suorakulmion pinta-alan kaavalla width * height.
    - getCircum(): laskee ja palauttaa suorakulmion ympärysmitan kaavalla 2 * (width + height).
    - setWidth(double): asettaa suorakulmion leveyden.
    - setHeight(double): asettaa suorakulmion korkeuden.
    Pääohjelmassa:
    - Luo Rectangle-olio kekomuistiin ja aseta sen leveys ja korkeus.
    - Tulosta suorakulmion pinta-ala ja ympärysmitta.
    - Tuhoa olio.

Vaihe 3: Student-luokka
    Jäsenmuuttujat:
    - name: merkkijono, joka sisältää opiskelijan nimen.
    - studentNumber: kokonaisluku, joka sisältää opiskelijanumeron.
    - average: reaaliluku, joka sisältää opiskelijan keskiarvon.
    Metodit:
    - Setterit:
        - setName(string): asettaa opiskelijan nimen.
        - setStudentNumber(int): asettaa opiskelijanumeron.
        - setAverage(double): asettaa opiskelijan keskiarvon.
    - Getterit:
        - string getName(): palauttaa opiskelijan nimen.
        - int getStudentNumber(): palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
        - double getAverage(): palauttaa opiskelijan keskiarvon.
    Pääohjelmassa:
    - Luo Student-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja keskiarvo.
    - Tulosta opiskelijan tiedot käyttämällä get-metodeja.
*/

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    Car myCar;
    myCar.setBrand("Chevrolet");
    myCar.setModel("Kalos");
    myCar.setYearModel(2005);
    myCar.printData();

    return 0;
}
