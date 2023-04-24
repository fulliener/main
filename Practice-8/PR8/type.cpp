#include "type.h"
#include <iostream>
#include <clocale>
using namespace std;
type3::type3(double _a)
{
	a = _a;
}

void type3::get_answer()
if (a != 0)
{
	cout << "Нет ограничений" << endl;
}
else
{
	cout << "Уравнение является неполным?" << endl;
}

void type3::show()
{
	cout << "Уравнение: " << a << " = 0" << endl;
}

type4::type4(double _b, double _c)
{
	b = _b;
	c = _c;
}

void type4::get_answer()
{
	double right, answer;
	right = c * (-1) / b;
	if (right <= 0)
	{
		cout << "Корней нет";
	}
	else
	{
		answer = sqrt(right);
		cout << "Корни уравнения: x1 = " << answer << " x2 = " << answer * (-1) << endl;
	}
}

void type4::show()
{
	cout << "Уравнение: " << b << "x^2 + " << c << " = 0" << endl;
}
