#include <iostream>

int main()
{
    int n;
    int m;
    int p;
    int sum = 0;
    
    std::cin >> n;
    std::cin >> m;
    std::cin >> p;
    
    int a[1000][1000];
    int b[1000][1000];
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            std::cin >> a[j][i];
        }
    }
    
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < p; i++)
        {
            std::cin >> b[j][i];
        }
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < p; k++)
        {
            for (int i = 0; i < m; i++)
            {
                sum+= a[j][i] * b[i][k];
            }
            std::cout << sum << " ";
            sum = 0;
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}