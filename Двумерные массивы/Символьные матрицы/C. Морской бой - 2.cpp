#include<iostream>
#include<string>

int main()
{
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    int f[102][102];
    for(int i = 0; i < 102; ++i) for(int j = 0; j < 102; ++j) f[i][j] = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            char c = ' ';
            std::cin >> c;
            f[i][j] = (c == '*' ? 1 : 0);
        }
    }
    
    int c = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if (f[i][j] == 0 && f[i + 1][j] == 0 && f[i - 1][j] == 0 && f[i][j + 1] == 0 && f[i][j - 1] == 0)
            {
                c++;
            }
        }
    }
    std::cout << c;
    
    return 0;
}

