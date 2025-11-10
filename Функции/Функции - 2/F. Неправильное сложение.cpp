#include <iostream>
#include <cmath>

typedef unsigned long long ulong;

ulong summa(ulong a, ulong b)
{
   ulong res = 0;
   ulong mult = 1;
   while (a > 0 || b > 0)
   {
      ulong add = a % 10 + b % 10;
      res += add * mult;
      mult *= (add > 9 ? 100 : 10);
      a /= 10;
      b /= 10;
   }
   return res;
}

ulong min (ulong a, ulong b)
{
    return a < b ? a : b;
}

ulong max (ulong a, ulong b)
{
    return a > b ? a : b;
}


int main()
{
    ulong a;
    ulong b;
    ulong c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    ulong m = summa(summa(a, b), c);
    ulong n = summa(summa(c, b), a);
    ulong k = summa(summa(a, c), b);
    
    if ( m == n && n == k)
    {
        std::cout << "NO\n";
        std::cout << m;
    }
    else
    {
        std::cout << "YES\n";
        
        ulong p[3];
        p[0] = m;
        p[1] = n;
        p[2] = k;
    
        m = min(min(p[0], p[1]), p[2]);
        n = max(max(p[0], p[1]), p[2]);
        k = p[0] + p[1] + p[2] - m - n;
        
        std::cout << m << "\n";
        
        if (m != k && n != k)
        {
            std::cout << k << "\n";
        }
        
        std::cout << n;
        
    }
    
    return 0;
}
