/*Aseta metodissa setEngine moottorille ominaisuudet:
    hevosvoimia=150
    moottorintilavuus=2.0
Aseta metodissa setWheels, kullekin renkaalle ominaisuudet:
    koko=17
    tyyppi=kesarengas
Toteuta metodi void printDetails(), joka tulostaa auton tiedot,
mukaan lukien moottorin ja renkaiden tiedot */

#include "car.h"
#include <iostream>

Car::Car() {} // oletuskonstruktori

Car::Car(string md, string br) : model(md), brand (br){} // konstruktori, joka alustaa auton mallin ja merkin


void Car::setEngine() {             // asetetaan moottorin tiedot
    objEngine.setHorsepower(150);   // asetetaan moottorin hevosvoima
    objEngine.setDisplacement(2.0); // asetetaan moottorin tilavuus litroina
}

void Car::setWheels() {             // asetetaan jokaisen renkaan tiedot
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}


string Car::getModel() const {          // palauttaa auton mallin
    return model;
}
void Car::setModel(string newModel) {   // asettaa auton mallin
    model = newModel;
}


string Car::getBrand() const {          // palauttaa auton merkin
    return brand;
}
void Car::setBrand(string newBrand){    // asettaa auton merkin
    brand = newBrand;
}

// tulostaa auton, moottorin ja renkaiden tiedot
void Car::printDetails() {
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}

