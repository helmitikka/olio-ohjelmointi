/* Luokan Car toteutus:
Luo luokka Car, joka koostuu seuraavista osista:
    Yksi Engine-olio, neljä Wheel-oliota.
    string model (auton malli) ja string brand (auton merkki)
Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.
Aseta metodissa setEngine moottorin ominaisuudet.
Aseta metodissa setWheels, kunkin renkaan ominaisuudet.
Toteuta metodi void printDetails(), joka tulostaa auton tiedot,
mukaan lukien moottorin ja renkaiden tiedot.*/

#ifndef CAR_H
#define CAR_H

// Car-luokan olio luo Engine-luokan olion ja Wheel-luokan oliot.
// Car-luokka on siis koosteluokka (kompositio).

#include "engine.h"
#include "wheel.h"

#include <string>

class Car // Car-luokka, joka koostuu moottorista ja neljästä renkaasta
{
private:
    Engine objEngine;   // Engine-luokan olio
    Wheel objWheel1;    // Neljä Wheel-oliota
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;       // auton malli
    string brand;       // auton merkki
public:
    Car();  // oletuskonstruktori
    Car(string md, string br); // konstruktori, joka alustaa mallin ja merkin, md sanasta model, br sanasta brand

    void setEngine();   // asettaa moottorin tiedot
    void setWheels();   // asettaa renkaiden tiedot

    string getModel() const;    // hakee ja palauttaa auton mallin
    void setModel(string md);   // asettaa auton mallin

    string getBrand() const;    // hakee ja palauttaa auton merkin
    void setBrand(string br);   // asettaa auton merkin

    void printDetails();    // tulostaa auton tiedot
};

#endif // CAR_H
