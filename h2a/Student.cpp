#include "Student.h" // Student-luokan määrittely
#include <string>

// Setterit

void Student::setName(const string &newName)
{
    name = newName;   // asettaa opiskelijan nimen
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;   // asettaa opiskelijanumeron
}

void Student::setAverage(double newAverage)
{
    average = newAverage;   // asettaa keskiarvon
}


// Getterit

string Student::getName() const
{
    return name;   // palauttaa ospielijan nimen
}

int Student::getStudentNumber() const
{
    return studentNumber;   // palauttaa opiskelijanumeron
}

double Student::getAverage() const
{
    return average;   // palauttaa keskiarvon
}

/*
Muistiinpanoja:
 Metodit:
 - Setterit:
    - setName(string): asettaa opiskelijan nimen.
    - setStudentNumber(int): asettaa opiskelijanumeron.
    - setAverage(double): asettaa opiskelijan keskiarvon.
 - Getterit:
    - string getName(): palauttaa opiskelijan nimen.
    - int getStudentNumber(): palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
    - double getAverage(): palauttaa opiskelijan keskiarvon.
*/
