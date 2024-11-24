#include "Animal.h"
#include <iostream>

// Virtuaalisen metodin callOut toteutus kantaluokassa
void Animal::callOut() const {
    cout << "Elain aantelee." << endl;
}

Animal::~Animal() {}
