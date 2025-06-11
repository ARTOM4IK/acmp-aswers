#include <stdio.h>

int main(int argc, char** argv){
    int a;
    int b;
    scanf("%d", &a);
    if (a % 10 > 0){
          b = a / 10 + 1;
       }
    else{
        b = a / 10;
    }
    printf("%d", b);
    return 0;   
}
