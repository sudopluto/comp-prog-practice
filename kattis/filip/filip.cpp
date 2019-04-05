#include <iostream>

using namespace std;

int main(void) {

  int x, y;

  cin >> x >> y;

  int a = x;
  int b = y;


  int sel_big = 0;
  for (int ii = 0; ii < 3; ++ii) {
    if (sel_big == 0) {
      int diff = (x % 10) - (y % 10);
      if (diff > 0) {
        sel_big = a; 
      }
      else if (diff < 0) {
        sel_big = b;
      }
    }
  
    x /= 10;
    y /= 10;
  }

  int rev = 0;
  int mult = 100;
  for (int ii = 0; ii < 3; ++ii) {
    rev += (sel_big % 10) * mult; 
    mult /= 10;
    sel_big /= 10;
  }

  cout << rev << endl;


  return 0;
}
