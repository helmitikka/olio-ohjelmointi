/* Luokan Engine toteutus:
Luo luokka Engine, joka sisältää seuraavat ominaisuudet:
    int horsepower: moottorin hevosvoimat.
    double displacement: moottorin tilavuus litroissa.
Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.*/

#ifndef ENGINE_H
#define ENGINE_H

// luokan muuttujien ja metodien määrittelyt

class Engine // Engine-luokka, joka määrittää auton moottorin ominaisuudet
{
private:
    int horsepower;                     // moottorin hevosvoimat
    double displacement;                // moottorin tilavuus litroissa
public:
    Engine();                           // oletuskonstruktori
    Engine(int hp, double dp);          // konstruktori, hp tulee sanasta horsepower, dp sanasta displacement

    // Getterit ja setterit
    int getHorsepower() const;          // hakee ja pallauttaa moottorin hevosvoimat
    void setHorsepower(int hp);         // asettaa moottorin hevosvoimat

    double getDisplacement() const;     // hakee ja palauttaa moottorin tilavuuden
    void setDisplacement(double dp);    // asettaa moottorin tilavuuden
};

#endif // ENGINE_H
