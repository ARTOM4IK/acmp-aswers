#include <iostream>

unsigned long long C( unsigned long long n, unsigned long long k)
{
    if (k < (n / 2))
    {
        return C(n, n - k);
    }
    
    int res = 1;
    int x = 1;
    
    for(int i = k + 1; i <= n; i++)
    {
        res*= i;
        
        while (res % x == 0 && x <= n - k)
        {
            res /= x;
            x++;
        }
    }
    for (int i = x; i <= n - k; i++)
    {
        res /= i;
    }
    return res;
}

int main()
{
    unsigned long long n;
    unsigned long long k;
    
    std::cin >> n;
    std::cin >> k;
    
    std::cout << C(n, k);
    
    return 0;
}