#include <iostream>

using namespace std;

int main(void) {

  int x, y, n;

  cin >> x >> y >> n;

  for(int ii = 1; ii <= n; ++ii) {
    bool raw = true;
    if (ii % x == 0) {
      cout << "Fizz";
      raw = false;
    }
    if (ii % y == 0) {
      cout << "Buzz"; 
      raw = false;
    }

    if (raw) {
      cout << ii; 
    }
    cout << endl; 
  }

  return 0;
}
