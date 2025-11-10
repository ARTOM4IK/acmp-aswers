#include <iostream>

int main()
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;

	int b1 = 0;
	int b2 = 0;
	int b3 = 0;

	int maxa = 0;
	int maxb = 0;

	int sum = 0;

	std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

	for (int i = 0; i < 3; i++)
	{
		maxa = std::max(a1, std::max(a2, a3));

		maxb = std::max(b1, std::max(b2, b3));

		sum += maxa * maxb;

		if (a1 == maxa)
		{
			a1 = -1;
		}
		else if (a2 == maxa)
		{
			a2 = -1;
		}
		else if (a3 == maxa)
		{
			a3 = -1;
		}
		if (b1 == maxb)
		{
			b1 = -1;
		}
		else if (b2 == maxb)
		{
			b2 = -1;
		}
		else if (b3 == maxb)
		{
			b3 = -1;
		}
	}

	std::cout << sum;

	return 0;
}