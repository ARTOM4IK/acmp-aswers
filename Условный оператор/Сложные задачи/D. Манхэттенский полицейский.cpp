#include <iostream>

using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;

    int time;
    if (N == 1 || M == 1) 
    {
        time = (N * M) * 2;
    } else if (N % 2 == 0 || M % 2 == 0) 
    {
        time = (N * M);
    } else 
    {
        time = (N * M) + 1;
    }

    cout << time * 100 << endl;
    return 0;
}