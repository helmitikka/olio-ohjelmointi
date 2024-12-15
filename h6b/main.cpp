// Ohjeet: https://peatutor.com/cplus/harjoitukset/h6b.php

#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass exampleObject; // luodaan luokan ExampleClass olio
    exampleObject.startToWait(); // kutsutaan olion metodia startToWait

    return a.exec();
}
