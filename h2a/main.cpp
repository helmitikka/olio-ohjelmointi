/*
Harjoituksen ohjeet: https://peatutor.com/cplus/harjoitukset/h2a.php
Vaihe 1: Car-luokka
  Pääohjelmassa:
  - Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi.
  - Tulosta auton tiedot käyttämällä printData()-metodia.

Vaihe 2: Rectangle-luokka
  Pääohjelmassa:
  - Luo Rectangle-olio kekomuistiin ja aseta sen leveys ja korkeus.
  - Tulosta suorakulmion pinta-ala ja ympärysmitta.
  - Tuhoa olio.

Vaihe 3: Student-luokka
  Pääohjelmassa:
  - Luo Student-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja keskiarvo.
  - Tulosta opiskelijan tiedot käyttämällä get-metodeja.
*/

#include <iostream> // tulostusta varten
#include "Car.h" // Car-luokan määrittelyt
#include "Rectangle.h" // Rectangle-luokan määrittelyt
#include "Student.h" // Student-luokan määrittelyt
#include <memory> // smart-pointtereita varten

using namespace std;

int main()
{
    // Vaihe 1. Car-luokka

    Car myCar;                      // Luodaan Car-olio pinomuistiin
    myCar.setBrand("Chevrolet");    // Asetetaan auton merkki
    myCar.setModel("Kalos");        // Asetetaan auton malli
    myCar.setYearModel(2005);       // Asetetaan auton valmistusvuosi
    myCar.printData();              // Kutsutaan funktiota, joka tulostaa auton tiedot
    cout << endl;                   // rivinvaihto ennen seuraavaa luokkaa


    // Vaihe 2. Rectangle-luokka

    Rectangle *rectanglePtr = new Rectangle;    // Luodaan dynaaminen Rectangle-olio kekomuistiin osoittimen avulla, tuhotaan myöhemmin
    rectanglePtr->setWidth(6.25);               // Asetetaan leveys
    rectanglePtr->setHeight(8.50);              // Asetetaan korkeus

    cout << "Suorakulmion pinta-ala: " << rectanglePtr->getArea() << endl;      // Tulostetaan pinta-ala
    cout << "Suorakulmion ymparysmitta: " << rectanglePtr->getCircum() << endl; // Tulostetaan ympärysmitta

    delete rectanglePtr;  // Tuhotaan olio ja vapautetaan kekomuisti
    rectanglePtr = nullptr; // Nollataan osoitin
    cout << endl; // rivinvaihto ennen seuraavaa luokkaa


    // Vaihe 3. Student-luokka

    unique_ptr<Student> studentPtr = make_unique<Student>(); // Luodaan Student-olio älykkäällä osoittimella

    studentPtr->setName("Matti Kukkarossa");    // Asetetaan opiskelijan nimi
    studentPtr->setStudentNumber(12345678);     // Asetetaan opiskelijanumero
    studentPtr->setAverage(4.7);                // Asetetaan keskiarvo

    // Tulostetaan opiskelijan tiedot käyttämällä get-metodeja
    cout << "Nimi: " << studentPtr->getName() << endl;
    cout << "Opiskelijanumero: " << studentPtr->getStudentNumber() << endl;
    cout << "Keskiarvo: " << studentPtr->getAverage() << endl;
    cout << endl;

    return 0;
}
