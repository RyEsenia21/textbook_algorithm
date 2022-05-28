# include <cmath>
# include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
	int x, y, sum, raz, umn, chas;
	cout << "Введите Х: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y; 
	sum = x + y;
	cout << "сумма = " << sum << endl;
	raz = x - y;
	cout << "разница = " << raz << endl;
	umn = x * y;
	cout << "произведение = " << umn << endl;
	chas = x / y;
	cout << "частное = " << chas << endl;
	return (0);
}