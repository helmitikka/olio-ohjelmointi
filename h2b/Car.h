#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car   // Luokka nimeltä Car
{
private:                      // yksityiset jäsenmuuttujat
    string brand;             // merkkijono, joka sisältää auton merkin
    string model;             // merkkijono, joka sisältää auton mallin
    int yearModel;            // kokonaisluku, joka sisältää auton valmistusvuoden
public:                       // julkiset metodit
    void printData() const;   // tulostaa auton merkin, mallin & valmistusvuoden
    Car(string, string, int); // konstruktori, jolla alustetaan jäsenmuuttujat
};
#endif // CAR_H
