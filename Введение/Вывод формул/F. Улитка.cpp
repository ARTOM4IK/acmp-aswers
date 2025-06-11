#include <iostream>

int main()
{
    int h, a, b, n = 1;

    std::cin >> h >> a >> b;
    if(a < h)
    {
        n += (h-a) / (a-b);
        if((h-a) % (a-b) > 0)
        {
            n++;
        }
    }
    std::cout << n;
    return 0;
}