#include <stdio.h>

int main(int argc, char** argv){
    int a;
    scanf("%d", &a);
    printf("%d", a % 100 / 10 + a % 10 + a / 100);
    return 0;   
}
