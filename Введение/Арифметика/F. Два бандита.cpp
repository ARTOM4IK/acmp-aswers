#include <stdio.h>

int main(int argc, char** argv)
{
    int a;
    int b;
    int c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b - 1;
    printf("%d %d", c - a, c - b);
    return 0;   
}