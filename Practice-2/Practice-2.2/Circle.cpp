#include <iostream>
#include "Circle.h"
#include <cmath>
using namespace std;

Circle::Circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}
void Circle::set_circle(float r, float x, float y) {
    cout << "Введите значение радиуса: ";
    cin >> r;
    cout << "Введите значение x координаты: ";
    cin >> x;
    cout << "Введите значение y координаты: ";
    cin >> y;
}
float Circle::square() {
    float s;
    s = 3.14 * radius * radius;
}
bool Circle::triangle_around(float a, float b, float c) {
    return true;
}
bool Circle::triangle_in(float a, float b, float c) {
    return true;
}
bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
    return ((sqrt((pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2))) < (r + radius)));
}