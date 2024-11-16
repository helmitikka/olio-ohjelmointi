#include "Car.h"
#include <iostream>
#include <string>

// konstruktori, joka alustaa jäsenmuuttujat
Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData() const
{
    cout << brand << " " << model << " " << yearModel << endl;
}
