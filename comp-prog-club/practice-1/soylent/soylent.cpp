#include <iostream>

using namespace std;

int main(void) {
 
  int calories;
  int num;

  cin >> num;
  for (int i = 0; i < num; ++i) {
    cin >> calories;
    double bottles = calories / 400.0;

    if ((int) bottles == bottles) {
      cout << ((int) bottles) << endl;
    }
    else {
      cout << ((int)bottles + 1) << endl; 
    }
  }

  return 0;
}
