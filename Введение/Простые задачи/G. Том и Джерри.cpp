#include <iostream>
  
int main()
{ 
  long long int a, b;
    
  std::cin >> a >> b;
        
  std::cout << a * b - (a + b - 1) + 1 << std::endl;
  return 0;
}