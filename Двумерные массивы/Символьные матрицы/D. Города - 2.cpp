#include<iostream>
#include<string>

int main()
{
    int n = 0;
    std::string res[50];
    std::cin >> n;
    std::string field[50];
    for(int i = 0; i < n; ++i)
    {
        std::cin >> field[i];
    }
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            count += (field[i][j] == 'C' ? 1 : 0);
        }
    }
    count /= 2;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            std::cout << (count > 0 ? 1 : 2);
            if(field[i][j] == 'C')
            {
                --count;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}