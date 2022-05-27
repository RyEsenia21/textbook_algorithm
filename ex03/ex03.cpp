# include <cmath>
# include <iostream>

unsigned long long int fact(int N)
{
	unsigned long long int res = 1, i;

	for(i = 1; i <= N; i++)
	{
		res *= i;
	}
	return res;
}

int main(int argc, char *argv[])
{
	unsigned long long int N, i, res;
	std::cout << "N=";
	std::cin >> N;
	if (N < 0)
		std::cout << "durak" << std::endl;
	else if (N >= 0)
	{
		std::cout << "Factorial:" << fact(N) << std::endl;
	}
	return 0;	
}