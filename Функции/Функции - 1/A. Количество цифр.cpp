#include <iostream>
using namespace std;

int IsDigit( char x )
{
    if (x >= 48 && x <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    char a;
    char b;
    char z;
    int sum = 0;
    
    cin >> a;
    cin >> b;
    cin >> z;
    
    sum += IsDigit(a);
    sum += IsDigit(b);
    sum += IsDigit(z);
    
    printf("%i", sum);
    
    return 0;
}