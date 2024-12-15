/* Lisää luokkaan: (h-tiedostoon)
1. public metodi void startToWait();
2. signals osioon signaali void readyToSay();
3. public slots osio ja siihen metodi void sayHelloSlot();
4. Lisää #include <QThread>
5. Lisää myös #include <QCoreApplication>, jos se puuttuu */

#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QThread>
#include <QCoreApplication>
#include <QObject>
#include <QDebug>

class ExampleClass : public QObject // Q_OBJECT-makro
{
    Q_OBJECT

public:
    explicit ExampleClass(QObject *parent = nullptr);
    void startToWait();

signals:
    void readyToSay();

public slots:
    void sayHelloSlot();
};

#endif // EXAMPLECLASS_H


/*
Vertailu h6a ja h6b .h tiedostojen välillä:
- molemmat periytyy QObject-luokasta --> mahdollistaa signal-slot
- molemmissa on Q_OBJECT makro
- h6a tehtävässä myClass.h:ssa oli signaali mySignal ja slotti mySlot,
  joista vastaavat tässä h6b:ssä ovat readyToSay signaali sekä sayHelloSlot slotti.
- h6b sisältää QThreadin, joka simuloi viivästystä, jota ei ollut h6a:ssa.
*/
