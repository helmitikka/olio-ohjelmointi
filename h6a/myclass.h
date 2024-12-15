#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject> // peritään luokka QObject, jota tarvitaan MyClass Qt:n signal/slot mekanismiin
#include <iostream>
#include <QDebug>
using namespace  std;

/*
Luokkaan lisättynä Q_OBJECT-makro, mahdollistaa:
- Signaalit ja slotit: Qt:n oma tapa käsitellä tapahtumia ja kommunikointia objektien välillä.
- Dynaaminen ominaisuusjärjestelmä, tukee luokkien ominaisuuksien määrittämistä ja käsittelyä dynaamisesti, eli ajonaikaisesti.
- Metaobjekti: makron avulla luokasta tulee metaobjekti, mikä mahdollistaa mm. luokan tyyppitietojen (kuten metodien ja ominaisuuksien) saamisen ajonaikana.*/

class MyClass : public QObject { // Q_OBJECT-makro
    Q_OBJECT

/*
MyClass luokan konstruktori MyClass(QObject* parent = nullptr),
mahdollistaa sen, että luokan oliolle voidaan asettaa ns. parent olio.

Qt-frameworkin oliomallin parent-ominaisuudella voidaan hallita olioiden elinkaarta.
Jokainen QObject-pohjainen olio voi saada toisen QObject-olion parentiksi.
Kun parent olio tuhotaan, myös sen lapsi oliot tuhotaan automaattisesti.
*/

public:
    MyClass(QObject* parent = nullptr);  // mahdollistetaan parent olio

    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif // MYCLASS_H
