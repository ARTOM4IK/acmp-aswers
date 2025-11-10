#include <stdio.h>
int main (int argc, char **argv)
{
  int a;
  scanf("%d", &a);
  
  if (a > 1) {
      if(a % 2 == 0){
          printf("%d", a / 2);
      }
      else if(a % 2 != 0){
          printf("%d", a);
      }
  }
  else {
      printf("%d", 0);
  }
  return 0;
}