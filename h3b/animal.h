#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal    // Luodaan kantaluokka Animal
{
public:
    virtual void callOut() const; // Animal-luokan virtuaalinen metodi callOut.
    virtual ~Animal();
};

#endif // ANIMAL_H
