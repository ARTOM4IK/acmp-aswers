#include<iostream>
#include<string>

int main()
{
    int n;
    int m;
    
    std::cin >> n;
    std::cin >> m;

    std::string *f = new std::string[n];  //nachalnya kartinka
    std::string *g = new std::string[n];  //negative mishi
    
    
    for(int i = 0; i < n; ++i)
    {
        std::cin >> f[i];
    }
    
    for(int i = 0; i < n; ++i)
    {
        std::cin >> g[i];
    }
    
    int c = 0;
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            f[i][j] = (f[i][j] == 'W' ? 'B' : 'W');
        }
    }
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            c += (f[i][j] != g[i][j] ? 1 : 0);
        }
    }
    
    std::cout << c;
    
    return 0;
}