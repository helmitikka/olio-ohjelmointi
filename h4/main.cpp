// Harjoituksen ohjeet: https://peatutor.com/cplus/harjoitukset/h4.php

#include "car.h"

using namespace std;


int main() {
    Car newCar("Corolla", "Toyota"); // Luodaan Car-olio
    newCar.setEngine();              // Asetetaan moottorin tiedot
    newCar.setWheels();              // Asetetaan renkaiden tiedot
    newCar.printDetails();           // Tulostetaan auton tiedot

    return 0;
}
