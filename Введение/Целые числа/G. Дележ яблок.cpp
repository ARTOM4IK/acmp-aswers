#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    scanf("%d", &a);
    scanf("%d", &b);

    c = b / a;
    d = b % a;
    e = a - d;
    
    if (d == 0) {
        e = 0;
    }

    printf("%d %d %d", c, d, e);
    return 0;
}