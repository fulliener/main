#pragma once
class Triangle{
private:
    float a, b, c;
public:
    Triangle(float a1, float b1, float c1);
    bool exst_tr();
    void set(double a1, double b1, double c1);
    void show();
    double perimetr();
    double square();
};