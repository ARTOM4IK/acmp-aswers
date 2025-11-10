#include <iostream>

int Prostoe( int x )
{
	if (x < 2)
	{
		return 0;
	}
    
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    
    return x;    
}

int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    int sum = Prostoe(a) + Prostoe(b) + Prostoe(c);
    
    std::cout << sum << std::endl;
    
    if (Prostoe(sum) > 0)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    return 0;
}
