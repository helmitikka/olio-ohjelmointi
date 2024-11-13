#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car // Määritetään Car-luokka
{
private:
    string brand;       // merkkijono, joka sisältää auton merkin.
    string model;       // merkkijono, joka sisältää auton mallin.
    int yearModel;      // kokonaisluku, joka sisältää auton valmistusvuoden.
public:
    void printData() const;     // tulostaa auton merkin, mallin ja valmistusvuoden.
    void setBrand(string);      // asettaa auton merkin.
    void setModel(string);      // asettaa auton mallin.
    void setYearModel(int);     // asettaa auton valmistusvuoden.
};
#endif
