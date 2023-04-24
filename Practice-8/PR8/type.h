#include <iostream>
using namespace std;
class type3
{
private:

	double a;

public:

	type3(double _a) {
		a = _a;
	}
	void get_answer() {
		if (a != 0)
		{
			cout << "Нет ограничений" << endl;
		}
		else
		{
			cout << "Уравнение является неполным?" << endl;
		}
	}
	void show() {
		cout << "Уравнение: " << a << " = 0" << endl;
	}

};

class type4
{
private:
	double b, c;
public:
	type4(double _b, double _c) {
		b = _b;
		c = _c;
	}
	void get_answer() {
		double right, answer;
		right = c * (-1) / b;
		if (right <= 0)
		{
			cout << "Корней нет";
		}
		else
		{
			answer = sqrt(right);
			cout << "Корни уравнения: x1 = " << answer << " x2 = " << answer * (-1) << std::endl;
		}
	}

	void show() {
		cout << "Уравнение: " << b << "x^2 + " << c << " = 0" << std::endl;
	}
};

