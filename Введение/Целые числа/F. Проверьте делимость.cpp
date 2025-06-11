#include <stdio.h>

int main(int argc, char** argv){
    int a;
    int b;
    int c = 1;
    int d = 666;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if ((a % b == 0) or (b % a == 0)){
          printf("%d", c);
       }
    else{
        printf("%d", d);
    }
    return 0;   
}
