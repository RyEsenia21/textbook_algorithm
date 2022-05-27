# include <cmath>
# include <iostream>

int main(int argc, char *argv[])
{
	double l, s, r = 12;
	l = 2 * M_PI * r;
	s = M_PI * pow(r, 2);
	std::cout << l << std::endl;
	std::cout << s << std::endl;
	return (0);
}