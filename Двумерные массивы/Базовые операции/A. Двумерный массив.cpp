#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int m = 0;
	cin >> n;
	cin >> m;
	
	int** a = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
	}
	
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}	
	}
	
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for(int j = 0; j < m; ++j)
		{
			sum = sum + a[i][j];
		}
		cout << sum << ' ';
	}
	cout << endl;
	
	for(int j = 0; j < m; ++j)
	{
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum = sum + a[i][j];
		}
		cout << sum << ' ';
	}
	cout << endl << endl;

	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	
	for(int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
