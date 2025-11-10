#include <iostream>

int main()
{
	long long int x = 0;
	long long int y = 0;

	std::cin >> x >> y;
	if (x == 1 && y == 1)
	{
		std::cout << 0;
	}
	else if (x != y)
	{
		std::cout << 1;
	}
	else if (x == 1 || y == 1)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 2;
	}

	return 0;
}