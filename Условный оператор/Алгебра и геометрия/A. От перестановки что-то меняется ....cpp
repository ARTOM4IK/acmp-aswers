#include <stdio.h>

int main()
{
int a, b, c;

scanf("%d %d %d", &a, &b, &c);

if (a + b == c){
    printf("YES");
}
else if (a + c == b){
    printf("YES");
}
else if (c + b == a){
    printf("YES");
}
else{
    printf("NO");
}
    return 0;
}