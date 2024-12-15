// Ohjeet: https://peatutor.com/cplus/harjoitukset/h6a.php

#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass myObject; // luodaan MyClass-olio

    myObject.raiseMySignal(); // kutsutaan metodi

    return a.exec();
}
