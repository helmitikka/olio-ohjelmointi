#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal // Luodaan Dog-luokka, joka perii kantaluokan Animal
{
public:
    void callOut() const override; // Ylikirjoitetaan aiemmin määritelty callOut-metodi (ks. animal.h ja animal.cpp), eläin ääntelee --> koira haukkuu!
    virtual ~Dog() override{}
};

#endif // DOG_H
