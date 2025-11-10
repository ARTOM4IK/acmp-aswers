#include <iostream>

int main()
{
    int n;
    int m;
    
    std::cin >> n;
    std::cin >> m;
    
    std::string p[100];
    
    for(int i = 0; i < n; ++i)
    {
        std::cin >> p[i];
    }
    
    int f[100][100];
    
    for(int j = 0; j < n; ++j)
    {
        for(int i = 0; i < m; ++i)
        {
            std::cin >> f[j][i];
        }
    }
    
    int c = 0;
    
    for(int j = 0; j < n; ++j)
    {
        for(int i = 0; i < m; ++i)
        {
            if (p[j][i] == 'R' && f[j][i] < 4)
            {
                c++;
            }
            else if (p[j][i] == 'G' && f[j][i] >= 4 && f[j][i] <= 5 || p[j][i] == 'G' && f[j][i] >= 0 && f[j][i] <= 1)
            {
                c++;
            }
            else if (p[j][i] == 'B' && (f[j][i] + 2) % 2 == 0)
            {
                c++;
            }
            
        }
    }
    
    std::cout << (c == 0 ? "YES" : "NO");
    
    return 0;
}