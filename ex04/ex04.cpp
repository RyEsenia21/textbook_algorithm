# include <cmath>
# include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a, b, c, d;
	cout << "введи первое число = ";
	cin >> a;
	cout << "введи второе число = ";
	cin >> b;
	c = (pow(a, 3) + pow(b, 3)) / 2;
	cout << "среднеарифметическое кубов = " << c << endl;
	d = (abs(a) * abs(b)) / 2;
	cout << "средне геометрическое модулей чисел = " << d << endl;
	return 0;	
}