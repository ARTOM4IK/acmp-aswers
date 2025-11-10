#include <stdio.h>

int main(int argc, char** argv)
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a * b == c) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
