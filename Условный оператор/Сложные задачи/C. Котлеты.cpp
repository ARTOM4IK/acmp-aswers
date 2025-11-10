#include <iostream>

using namespace std;

int main( void )
{
    int k, m, n;
    cin >> k >> m >> n;
    
    if (n <= k)
      std::cout << 2 * m;
    else
      std::cout << ((2 * n + k - 1) / k) * m;
    return 0;
}