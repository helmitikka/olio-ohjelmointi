#include "chef.h"
#include <iostream>

Chef::Chef(const string chefName) : name(chefName) // Chef-luokan kontruktori, parametrinä kokin nimi
{
    cout << "Chef " << name << " kontruktori" << endl; // tulostaa tiedon konstruktorista
}

void Chef::makeSalad()  // Funktio, joka valmistaa salaatin
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()   // Funktio, joka valmistaa keiton
{
    cout << "Chef " << name << " makes soup" << endl;
}

Chef::~Chef()   // Chef-luokan destruktori
{
    cout << "Chef " << name << " destruktori" << endl; // tulostaa tiedon olion tuhoamisesta
}
