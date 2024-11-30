/*Luokan Wheel toteutus:
Luo luokka Wheel, joka sisältää seuraavat ominaisuudet:
    int size: renkaan koko (esim. tuumina).
    string type: renkaan tyyppi (esim. "kesärengas" tai "talvirengas").
Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.*/
#ifndef WHEEL_H
#define WHEEL_H

#include <string>

using namespace std;

class Wheel // Wheel-luokka, joka määrittää renkaiden ominaisuudet
{
private:
    int size;       // renkaan koko
    string type;    // renkaan tyyppi (kesä- tai talvirengas)
public:
    Wheel ();                   // oletuskonstruktori
    Wheel (int sz, string tp);  // konstruktori, sz tulee sanasta size, tp sanasta type

    // Getterit ja setterit
    int getSize() const;        // hakee ja palauttaa renkaan koon
    void setSize(int sz);       // asettaa renkaan koon

    string getType() const;     // hakee ja palauttaa renkaan tyypin
    void setType(string tp);    // asettaa renkaan tyypin
};

#endif // WHEEL_H
