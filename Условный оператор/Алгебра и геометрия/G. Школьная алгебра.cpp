#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == 0 && b == 0 && c == 0) {
    cout << "0";
    return 0;
  }
  if (a != 0) {
    cout << a;
  }
  if (b != 0) {
    if (b > 0 && a != 0)
      cout << "+";
    if (b == -1) {
      cout << "-x";
  }
  else 
    if (b == 1)
      cout << "x";
    else
      cout << b << "x";
  }
  if (c != 0) {
    if (c > 0 && (a != 0 || b != 0))
      cout << "+";
    if (c == -1) {
        cout << "-y";
    }
    else if (c == 1) {
      cout << "y";
    }
    else {
      cout << c << "y";
    }
  }
  cout << endl;
}