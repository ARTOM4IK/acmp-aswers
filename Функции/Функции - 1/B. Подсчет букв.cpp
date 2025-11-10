#include <iostream>
using namespace std;

int IsLetter( char x )
{
    if (x >= 65 && x <= 90)
    {
        return 1;
    }
    else if (x >= 97 && x <= 122)
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
    
    sum += IsLetter(a);
    sum += IsLetter(b);
    sum += IsLetter(z);
    
    printf("%i", sum);
    
    return 0;
}