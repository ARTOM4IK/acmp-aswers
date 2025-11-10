#include <iostream>

int main()
{
    int n = 0;
    int m = 0;
    int k = 0;
    
    std::cin >> n >> m >> k;
    
    int a[202][202];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 0;
        }
    }

    for (int l = 1; l <= k; l++)
    {
        int i = 0;
        int j = 0;
        
        std::cin >> i >> j;
        a[i][j] = 9;
    }
    
    int c = 0;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] != 9)
            {
                c = 0;
            
                for (int z = -1; z < 2; z++)
                {
                    for (int x = -1; x < 2; x++)
                    {
                        if (a[i + z][j + x] == 9)
                        {
                            c+= a[i + z][j + x];
                        }
                    }
                }
                a[i][j] = c / 9;
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 0)
            {
                std::cout << ".";
            }
            else if (a[i][j] == 9)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << a[i][j];
            }
        }
        std::cout << "\n";
    }

    return 0;
}