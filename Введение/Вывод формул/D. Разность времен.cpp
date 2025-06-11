#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    
    g = a * 3600 + b * 60 + c;
    h = d * 3600 + e * 60 + f;
    
    printf("%d", h - g);
    return 0;
}