/*
Ohjeet: https://peatutor.com/cplus/harjoitukset/h5.php
*/
#include <iostream>
#include "associationa.h"
using namespace std;

int main()
{
    // Luodaan muuttujat int a ja b, arvoiksi annetaan 5 ja 10
    int a = 5;
    int b = 10;

    // Tulostetaan muuttujien a ja b arvot ja osoitteet
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    cout << endl;

    // Lisätään osoitinmuuttuja myPointer, johon sijoitetaan muuttujan a osoite
    int * myPointer = &a;
    // tulostetaan osoittimen osoittaman muistipaikan osoite
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    // tulostetaan osoittimen osoittaman muistipaikan sisältö
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    cout << endl;

    // sijoitetaan osoittimeen myPointer muuttujan b osoite
    myPointer = &b;
    // tulostetaan osoittimen osoittaman muistipaikan osoite
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    // tulostetaan osoittimen osoittaman muistipaikan sisältö
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    cout << endl;

    // Luodaan referenssi nimeltä refA, joka viittaa muuttujaan a
    int& refA = a;
    // tulostetaan referenssin osoittama osoite
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    // tulostetaan referenssin osoittaman muistipaikan sisältö
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << endl;

 /*
    // Kokeillaan, voidaanko muuttaa refA osoittamaan b:n osoitteeseen
    int& refA = &b;
    cout << "refA:n osoittaa osoitteeseen: " << &refA << endl;
    // Kun teki ylläolevan, tuli virhe:
    // main.cpp:47:10: Redefinition of 'refA'
    // main.cpp:38:10: previous definition is here
 */

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    return 0;
}


