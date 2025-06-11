#include <iostream>

int main()
{
  int k, n, a, b;
    
  std::cin >> k >> n;
    
  a = (n - 1) / k + 1;
  b = (n - 1) % k + 1;
  std::cout << a << " " << b;
    
  return 0;
}