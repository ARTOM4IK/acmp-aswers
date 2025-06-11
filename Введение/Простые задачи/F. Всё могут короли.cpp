#include <iostream>
   
int main()
{ 
  long long int a, b, w;
     
  std::cin >> a >> b;
 
  if (a % 2 == 0)
      w = a / 2;
  else
      w = a / 2 + 1;
   
  std::cout << w * w << std::endl;
  return 0;
}