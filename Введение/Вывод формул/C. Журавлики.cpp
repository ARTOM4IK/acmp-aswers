#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
 
    scanf("%d", &a);
    b = a / 6;
    c = b * 4;
    
    printf("%d %d %d", b, c, b);
    return 0;
}