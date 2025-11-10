#include <iostream>

using namespace std;

int main( void )
{
    int N;
    cin >> N;

    for (int k5 = N / 5; k5 >= 0; --k5) 
    {
        int remaining = N - 5 * k5;
        if (remaining % 3 == 0) 
        {
            int k3 = remaining / 3;
            cout << k5 << " " << k3 << endl;
            return 0;
        }
    }

    return 0;
}