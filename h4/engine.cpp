#include "engine.h"

// Luokan metodien toteutukset

Engine::Engine() : horsepower(0), displacement(0.0) {} // oletuskonstruktori
Engine::Engine(int hp, double dp) : horsepower(hp), displacement(dp) {} // konstruktori

// Getterit ja setterit
int Engine::getHorsepower() const {        // palauttaa hevosvoimat
    return horsepower;
}
void Engine::setHorsepower(int hp) {        // asettaa hevosvoimat
    horsepower = hp;
}

double Engine::getDisplacement() const {    // palauttaa moottorin tilavuuden
    return displacement;
}
void Engine::setDisplacement(double dp) {   // asettaa moottorin tilavuuden
    displacement = dp;
}
