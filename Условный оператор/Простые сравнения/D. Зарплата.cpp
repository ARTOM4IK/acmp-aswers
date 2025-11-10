#include <stdio.h>
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

int
main (int argc, char **argv)
{
  int a;
  int b;
  int c;
  int min;
  int max;
  min = 0;
  max = 0;
  scanf ("%d", &a);
  scanf ("%d", &b);
  scanf ("%d", &c);
  max = MAX(a,b);
  min = MIN(a,b);
  if (max < c ){
      max = c;
  }
  if (min > c){
      min = c;
  }
  printf ("%d", max - min);
  return 0;
}