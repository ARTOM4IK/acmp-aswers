#include <iostream>

int main()
{
	long long int r1 = 0;
	long long int r2 = 0;
	long long int r3 = 0;

	std::cin >> r1 >> r2 >> r3;

	if (r1 >= r2 + r3)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}