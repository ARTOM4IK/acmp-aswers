#include <iostream>
#include <cmath>

int main()
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	std::cin >> x1 >> y1 >> x2 >> y2;

	printf("%.5lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

	return 0;
}