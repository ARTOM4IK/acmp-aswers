#include<iostream>
#include<string>

int main()
{
    std::string f[4];
    for(int i = 0; i < 4; ++i)
    {
        std::cin >> f[i];
    }
    int c = 0;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            if ((f[i][j] == f[i + 1][j]) && (f[i][j] == f[i][j + 1]) && (f[i][j] == f[i + 1][j + 1]))
            {
                ++c;
            }
        }
    }
    std::cout << (c == 0 ? "Yes" : "No");
    return 0;
}