#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    scanf("%d", &a);
    scanf("%d", &b);

    c = a * b % 109;
    d = (c + 109) % 109 + 1;
    printf("%d", d);
}