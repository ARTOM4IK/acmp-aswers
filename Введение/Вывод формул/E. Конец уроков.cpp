#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    c = a;
    b = 540;
    
    while (c != 1) 
    {
            if (c != 1 & c % 2 != 0) {
            b = b + 15;
            } 
            else if (c != 1 & c % 2 == 0) {
            b = b + 5;
            } 
            c = c - 1;
    }

    printf("%d %d", (a * 45 + b) / 60, (a * 45 + b) % 60);
    return 0;
}
