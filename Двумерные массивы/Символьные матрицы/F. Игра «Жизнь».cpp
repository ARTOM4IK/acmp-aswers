#include <iostream>
const int N = 100;

void initMatr (int matr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matr[i][j] = 0;
        }    
    }
}

void readMatr(int matr[N][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c = ' ';
            std::cin >> c;
            matr[i][j] = (c == '*' ? 1 : 0);
        }    
    }
}

void step(int matr[N][N], int bmatr[N][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int z = -matr[i][j];
            
            for (int l = -1; l <= 1; l++)
            {
                for (int k = -1; k <= 1; k++)
                {
                    z += matr[(n + l + i) % n][(m + j + k) % m];
                }
            }
            
            if ((z == 3) || ((matr[i][j] == 1) && (z == 2)))
            {
                bmatr[i][j] = 1;
            }
            else
            {
                bmatr[i][j] = 0;
            }
        }
    }
}

void printMatr(int matr[N][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << (matr[i][j] == 1 ? '*' : '.');
        }
        std::cout << "\n";
    }
}

int main ()
{
    int n = 0;
    int m = 0;
    int k = 0;
    
    std::cin >> n >> m >> k;
    
    int a[N][N];
    int b[N][N];
    
    initMatr(a);
    initMatr(b);
    
    readMatr(a, n, m);
    
    for (int i = 0; i < k; i++)
    {
        if (i % 2 == 0)
        {
            step(a, b, n, m);
        }
        else
        {
            step(b, a, n, m);
        }
    }
    
    if (k % 2 == 0)
        {
            printMatr(a, n, m);
        }
        else
        {
            printMatr(b, n, m);
        }
    return 0;
}