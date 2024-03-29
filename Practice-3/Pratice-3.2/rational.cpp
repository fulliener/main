#include <iostream>
#include "rational.h"

using namespace std;

int search_gcd(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

Rational::Rational(int a1, int b1) {
    set(a1, b1);
}

void Rational::set(int a1, int b1) {
    a = a1; b = b1;
    if (b == 0) throw invalid_argument("Denominator cannot be equal 0.");
    if (a > b) {
        a = a % b;
    }
    int gcd = search_gcd(a, b);
    a /= gcd;
    b /= gcd;
}

void Rational::show() const {
    cout << a << "/" << b;
}