#include <iostream>
using namespace std;

/*
Vaihe 1. Kysy luvut ja tallenna ne muuttujiin a ja b. Käytä cin ja cout olioita.

Vaihe 2. Lisää sovellukseen summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot.
- funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
- funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
- jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
- kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b.

Vaihe 3. Lisää sovellukseen toiset summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot.
- funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
- funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
- jos jakaja on nolla retDiv tulostaa virheilmoituksen ja palauttaa nollan
- kutsu em. funktioita mainissa, niin että annat niille argumenttina muuttujat a ja b ja tulosta niiden palauttamat arvot.
*/

// Esitellään funktioiden prototyypit
void calcSum(int a, int b);         // void, koska funktiot eivät palauta mitään
void calcDiv(int a, int b);
int retSum(int a, int b);           // int, koska palauttaa kokonaisluvun
float retDiv(int a, int b);         // float, koska palauttaa osamäärän

int main()
{
    // Määritetään muuttujat a ja b
    int a;
    int b;

    // Kysytään käyttäjältä luvut, tallennetaan ne muuttujiin a ja b
    cout<<"Anna luku: ";                // Kysy luku käyttäjältä
    cin>>a;                             // Tallenna luku muuttujaan a

    cout<<"Anna toinen luku: ";         // Kysy toinen luku käyttäjältä
    cin>>b;                             // Tallenna luku muuttujaan b

    calcSum(a,b);   // Kutsu funktio calcSum
    calcDiv(a,b);   // Kutsu funktio calcDiv

    int sumResult = retSum(a, b); // Kutsu retSum ja tallenna palautettu summa int sumResult muuttujaan
    cout << "Palautettu summa: " << sumResult << endl;  // tulosta palautettu summa

    float divisionResult = retDiv(a, b); // Kutsu retDiv ja tallenna palautettu osamäärä float divisionResult muuttujaan
    cout << "Palautettu osamaara: " <<divisionResult << endl;  // tulosta palautettu osamäärä

    return 0;
}


void calcSum(int a, int b) // Summafunktio, joka ottaa kaksi kokonaislukua ja tulostaa niiden summan
{
    int sum; // Määritä muuttuja summalle
    sum = a + b;
    cout<<"Lukujen summa: " << sum << endl; // Tulosta lukujen summa
}


void calcDiv(int a, int b) // Jakofunktio, joka ottaa kaksi kokonaislukua ja tulostaa niiden osamäärän
{
    // Jos käyttäjän antama jakaja on 0, tulosta virheilmoitus
    if (b == 0){
        cout << "Virhe: jakaja ei saa olla 0" << endl;
    } else {
        float division = (float)a / (float)b ; // Muunetaan int-luvut float-tietotyyppiin samalla kun lasketaan osamäärä
        cout<<"Lukujen osamaara: " << division << endl;
    }
}


int retSum(int a, int b)  // Summafunktio, joka ottaa vastaan kaksi kokonaislukua, palauttaa summan, ei tulosta mitään
{
    return a + b; // palauta summa
}


float retDiv(int a, int b) // Jakofunktio, joka ottaa kaksi kokonaislukua, palauttaa niiden osamäärät, ei tulosta mitään
{
    if (b == 0){
        cout << "Virhe: jakaja ei saa olla 0" << endl;  // jos jakaja on nolla, tulosta virheilmoitus ja palauta nolla
        return 0;
    } else {
        return (float)a / (float)b; // Palauta osamäärä
    }
}
