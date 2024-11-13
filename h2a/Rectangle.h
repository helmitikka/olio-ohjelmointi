#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle     // Määritetään Rectangle-luokka
{
private:
    double width;   // suorakulmion leveys, reaaliluku (double)
    double height;  // suorakulmion korkeus, reaaliluku (double)

public:
    double getArea() const;    // laskee ja palauttaa pinta-alan
    double getCircum() const;  // laskee ja palauttaa ympärysmitan
    void setWidth(double);     // asettaa suorakulmion leveyden
    void setHeight(double);    // asettaa suorakulmion korkeuden
};

#endif // RECTANGLE_H
