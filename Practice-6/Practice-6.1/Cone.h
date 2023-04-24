#pragma once
#include "ostream"

using namespace std;

class Cone {
    double x, y, z;        // трехмерные координаты
    double radius;         // радиус
    double height;         // высота
public:
    // Конструктор по умолчанию
    Cone();
    // Конструктор с центром в начале координат
    Cone(double r, double h);
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h);

    // Функции доступа
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius() const;
    double getHeight() const;

    double area() const;
    double volume() const;

    friend ostream &operator<<(ostream &stream, Cone obj);
};