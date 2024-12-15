#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot())); // mySignal kytketään slottiin mySLOT
}

void MyClass::raiseMySignal()
{
    emit mySignal(); // lauseella emit mySignal(); "nostetaan" mySignal niminen signaali
}

void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";
}
