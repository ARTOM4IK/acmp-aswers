#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;
    int a;
    int b;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &a);
    scanf("%d", &b);
    if (x < 9 && x > 0 && x < 9 && y > 0 && a > 0 && a < 9 &&  b > 0 && b < 9) {
        if(abs(x - a) == abs(y - b)) {
            printf("YES");
        }
        else if(x == a || y == b) {
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}
