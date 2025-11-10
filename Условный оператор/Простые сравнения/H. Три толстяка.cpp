#include <stdio.h>
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

int main (int argc, char **argv)
{
  int a;
  int b;
  int c;
  int max;
  scanf ("%d", &a);
  scanf ("%d", &b);
  scanf ("%d", &c);
  
    if (MAX(a,b) < MAX(a,c)){
        max = MAX(a,c);
    }
    else{
        max = MAX(a,b);
    }
    if (a < 94 || a > 727){
        printf("Error");
    }
    else if (b < 94 || b > 727){
        printf("Error");
    }
    else if (c < 94 || c > 727){
        printf("Error");
    }
    else{
        printf("%d", max);
    }
  return 0;
}