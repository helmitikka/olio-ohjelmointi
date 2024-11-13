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
#include "Car.h" // Car-luokan määrittelyt
#include "Rectangle.h" // Rectangle-luokan määrittelyt
using namespace std;

int main()
{
    // Vaihe 1. Car-luokka

    Car myCar;                      // Luodaan Car-olio pinomuistiin
    myCar.setBrand("Chevrolet");    // Asetetaan auton merkki
    myCar.setModel("Kalos");        // Asetetaan auton malli
    myCar.setYearModel(2005);       // Asetetaan auton valmistusvuosi
    myCar.printData();              // Kutsutaan funktiota, joka tulostaa auton tiedot


    //Vaihe 2. Rectangle-luokka

    Rectangle *rectanglePtr = new Rectangle;    // Luodaan dynaaminen Rectangle-olio kekomuistiin osoittimen avulla, tuhotaan myöhemmin
    rectanglePtr->setWidth(6.25);               // Asetetaan leveys
    rectanglePtr->setHeight(8.50);              // Asetetaan korkeus

    cout << "Suorakulmion pinta-ala: " << rectanglePtr->getArea() << endl;      // Tulostetaan pinta-ala
    cout << "Suorakulmion ympärysmitta: " << rectanglePtr->getCircum() << endl; // Tulostetaan ympärysmitta

    delete rectanglePtr;  // Tuhotaan olio ja vapautetaan kekomuisti
    rectanglePtr = nullptr; // Nollataan osoitin

    return 0;
}
