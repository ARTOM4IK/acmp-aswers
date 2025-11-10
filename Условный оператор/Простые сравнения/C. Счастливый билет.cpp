#include <stdio.h>

int main(int argc, char** argv)
{
    int a;
    scanf("%d", &a);
    if (a / 100000 + (a / 10000) % 10 + (a / 1000) % 10 == (a % 1000) / 100 + a % 100 / 10 + a % 10 ) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}