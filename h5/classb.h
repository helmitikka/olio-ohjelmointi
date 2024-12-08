#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB
{
private:
    string info; // private string muuttuja nimeltä info
public:
    string getInfo() const;            // get metodi muuttujalle info
    void setInfo(const string &value); // set metodi muuttujalle info
};

#endif // CLASSB_H
