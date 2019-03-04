#include <iostream>

using namespace std;

int main(void) {

  long x;
  long y;

  while (cin >> x >> y) {

    if (y > x) {
      long temp = y;
      y = x;
      x = temp;
    }

    cout << (x - y) << endl;

  }

  return 0;
}
