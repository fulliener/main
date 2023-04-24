#include "type.h"
#include <iostream>
using namespace std;
Type5::Type5(double b1, double c1)
{
	B = b1;
	C = c1;
}

void Type5::get_answer()
{
	double answer;
	answer = (-C) / B;
	cout << "Корень уравнения: " << -C / B << endl;
}

void Type5::show()
{
	cout << "Уравнение: " << B << "x" << " + " << C << " = 0" << endl;
}

Type6::Type6(double a1, double b1, double c1)
{
	A = a1;
	B = b1;
	C = c1;
}

void Type6::get_answer()
{
	double D;
	D = B * B - 4 * A * C;
	if (D == 0) {
		cout << "Уравнение имеет единственный корень: " << (-B) / (2 * A) << endl;
	}
	else
	{
		if (D > 0) {

			double x1, x2;
			x1 = (-B + sqrt(D)) / (2 * A);
			x2 = (-B - sqrt(D)) / (2 * A);

			cout << "Корни уравнения: " << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;

		}
		else
		{
			cout << "D < 0, корней нет" << endl;
		}
	}
}

void Type6::show()
{
	cout << "Уравнение: " << A << "x^2 + " << B << "x + " << C << " = 0" << endl;
}