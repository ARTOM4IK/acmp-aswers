#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	//new massive
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	}

	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			c = a[i][n - 1 - j];
			a[i][n - 1 - j] = a[j][n - 1 - i];
			a[j][n - 1 - i] = c;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	return 0;
}