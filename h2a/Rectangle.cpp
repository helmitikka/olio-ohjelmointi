#include "Rectangle.h"  // Rectangle-luokan määrittely

double Rectangle::getArea() const
{
    return width * height;  // laskee pinta-alan
}

double Rectangle::getCircum() const
{
    return 2 * (width + height);  // laskee ympärysmitan
}

void Rectangle::setWidth(double w)
{
    width = w;  // asettaa leveyden
}

void Rectangle::setHeight(double h)
{
    height = h;  // asettaa korkeuden
}

/*
Muistiinpanoja:
- Metodit:
    - getArea(): laskee ja palauttaa suorakulmion pinta-alan kaavalla width * height.
    - getCircum(): laskee ja palauttaa suorakulmion ympärysmitan kaavalla 2 * (width + height).
    - setWidth(double): asettaa suorakulmion leveyden.
    - setHeight(double): asettaa suorakulmion korkeuden.
- double = liukuluku = desimaaliluku
*/
