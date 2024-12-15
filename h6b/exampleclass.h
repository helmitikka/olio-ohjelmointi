#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleClass(QObject *parent = nullptr);

signals:
};

#endif // EXAMPLECLASS_H
