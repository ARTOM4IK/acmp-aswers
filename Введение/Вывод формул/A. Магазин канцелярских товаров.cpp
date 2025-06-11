#include <stdio.h>
int main()
{
    long long a;
    long long b;
    long long c;
    
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
 
    printf("%lld", (a*3)+(b*5)+(c*12));
    return 0;
}