#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int b;
  char a;
  scanf("%c%d",&a,&b);
  if (((a=='A')||(a=='C')||(a=='E')||(a=='G'))&&(b%2!=0))
    cout<<"BLACK";
  else if
    (((a=='B')||(a=='D')||(a=='F')||(a=='H'))&&(b%2==0))
      cout<<"BLACK";
  else
    cout<<"WHITE";
} 