#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class Chef  // Luodaan kantaluokka Chef
{
protected:
    string name;    // nimi kokille
public:
    Chef(string chefName);  // Konstruktori, joka alustaa kokin nimen
    void makeSalad();       // Salaatin valmistusfunnktio
    void makeSoup();        // Keiton valmistusfunktio
    ~Chef();                // Destruktori, joka tuhoaa olion
};

#endif // CHEF_H
