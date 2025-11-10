#include<iostream>
#include<iomanip>
#include<cmath>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	int x2 = 0;
	int y2 = 0;
	int r2 = 0;
	std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	int dist2 = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	int radsum2 = r1 * r1 + 2 * r1 * r2 + r2 * r2;
	int raddiff2 = r1 * r1 - 2 * r1 * r2 + r2 * r2;
	std::cout << (dist2 <= radsum2 && dist2 >= raddiff2 ? "YES" : "NO");
	return EXIT_SUCCESS;
}
