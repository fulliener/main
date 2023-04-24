#include <iostream>
#include <cmath>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(float a1, float b1, float c1) {
    a = a1;
    b = b1;
    c = c1;
}
bool Triangle::exst_tr() {
    if (a + b > c and a + c > b and c + b > a) {
        return true;
    }
    else {
        return false;
    }
}
void Triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}
void Triangle::show() {
    cout << "Сторона a = " << a;
    cout << "Сторона b = " << b;
    cout << "Сторона c = " << c;
}
double Triangle::perimetr() {
    double P;
    P = a + b + c;
    return P;
}
double Triangle::square() {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}