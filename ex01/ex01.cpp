# include <cmath>
# include <iostream>

int main(int argc, char *argv[])
{
	long int x1 = 2, y1 = 2, x2 = 3, y2 = 3, x3 = 4, y3 = 4, s, p, a, b, c, pb;
	a = (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
	b = (sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)));
	c = (sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)));
	pb = a + b + c;
	p = pb / 2;
	s = sqrt(p * (p - a) * (p -b) * (p - c));
	std::cout << s << std::endl;
	std::cout << pb << std::endl;
	return (0);
}