bool Prostoe( int x )
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    
    return true;    
}

#include <iostream>

int main()
{
    int n = 0;
    int a = 2;
    std::cin >> n;
    
    while (!(Prostoe(a) && Prostoe(n - a)))
    {
        a++;
    }
    
    std::cout << a << " ";
    std::cout << n - a;

    return 0;
}