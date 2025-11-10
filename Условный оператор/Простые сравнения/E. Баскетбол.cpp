#include <stdio.h>

int main (int argc, char **argv)
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int h;
  int i;
  int j;
  scanf ("%d", &a);
  scanf ("%d", &b);
  scanf ("%d", &c);
  scanf ("%d", &d);
  scanf ("%d", &e);
  scanf ("%d", &f);
  scanf ("%d", &g);
  scanf ("%d", &h);
  
  i = a + c + e + g;
  j = b + d + f + h;
  
  if (i > j){
     printf ("%d", 1); 
  }
  if (i < j){
     printf ("%d", 2); 
  }
  if (i == j){
     printf ("DRAW"); 
  }
  
  return 0;
}