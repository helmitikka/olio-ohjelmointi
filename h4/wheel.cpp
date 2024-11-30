#include "wheel.h"

// Luokan metodien toteutukset

Wheel::Wheel() : size(0), type("unknown") {} // oletuskonstruktori
Wheel::Wheel(int sz, string tp) : size (sz), type (tp) {}   // konstruktori

// Getterit ja setterit
int Wheel::getSize() const {     // palauttaa renkaan koon
    return size;
}
void Wheel::setSize(int sz) {    // asettaa renkaan koon
    size = sz;
}

string Wheel::getType() const {  // palauttaa renkaan tyypin
    return type;
}
void Wheel::setType(string tp) { // asettaa renkaan tyypin
    type = tp;
}
