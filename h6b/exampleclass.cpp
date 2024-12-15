/*
startToWait() -metodiin seuraava koodi:
    QThread::msleep(1000);
    emit readyToSay();
sayHelloSlot() -metodiin seuraava koodi:
    qDebug()<<"Terve";
Kirjoita luokan muodostimeen rivit:
    qDebug()<<"Start";
    connect...
    qDebug()<<"End";
Muokkaa connect-riviä niin, että readyToSay-signaali yhdistetään slottiin sayHelloSlot.
Connect-funktion syntaksi: https://peatutor.com/qt/signal_slot.php
*/

#include "exampleclass.h"
#include <QDebug>

// konstruktori, alustetaan ExampleClass ja määritetään signaalin ja slotin yhteys
ExampleClass::ExampleClass(QObject *parent) : QObject(parent)
{
    qDebug()<<"Start";
    // readyToSay-signaali yhdistetään slottiin sayHelloSlot.
    connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug()<<"End";
}

// startToWait() metodi
void ExampleClass::startToWait()
{
    QThread::msleep(1000); // odottaa 1s
    emit readyToSay();     // lähettää signaalin readyToSay
}

// sayHelloSlot() metodi, suoritetaan kun readyToSay signaali vastaanotetaan
void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}

