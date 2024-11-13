#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string name;        // merkkijono, joka sisältää opiskelijan nimen.
    int studentNumber;  // kokonaisluku, joka sisältää opiskelijanumeron
    double average;     // reaaliluku, joka sisältää opiskelijan keskiarvon.
public:
    void setName(const string &newName);           // asettaa nimen
    void setStudentNumber(int newStudentNumber);     // asetttaa opiskelijanumeron
    void setAverage(double newAverage);        // asettaa keskiarvon

    string getName() const;         // palauttaa nimen
    int getStudentNumber() const;   // palauttaa opiskelijanumeron
    double getAverage() const;      // palauttaa keskiarvon
};

#endif // STUDENT_H
