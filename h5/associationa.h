#ifndef ASSOCIATIONA_H
#define ASSOCIATIONA_H

#include "classb.h"
#include <string>
using namespace std;

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif // ASSOCIATIONA_H
