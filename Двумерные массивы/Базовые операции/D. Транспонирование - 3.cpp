#include <iostream>

int main()
{
    int n;
    int m;
    
    std::cin >> n;
    std::cin >> m;
    
    int a[1000][1000];
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            std::cin >> a[j][i];
        }
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            std::cout << a[j][i] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}