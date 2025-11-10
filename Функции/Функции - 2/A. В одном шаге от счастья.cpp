#include <iostream>
int numsum(int x)
{
    int res = 0;
    while(x > 0)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}
bool happy (int x)
{
    return (abs(numsum(x / 1000) == numsum(x % 1000)));
}

int main()
{
    int k;
    int a[10];
    
    std::cin >> k;
    
    for(int i = 0; i < k; i++)
    {
        std::cin >> a[i];
    }
    
    for(int i = 0; i < k; i++)
    {
        std::cout << (happy(a[i] + 1) || happy(a[i] - 1) ? "Yes" : "No") << std::endl;
    }

    return 0;
}