#include <iostream>

using namespace std;

int main(void) {
  double eng_miles;
  cin >> eng_miles;
  
  double paces = eng_miles * (5280 / 4854.0) * 1000;

  // paces should be rounded
  if (paces + 0.5 >= ((int)paces + 1)) {
    cout << ((int)paces + 1) << endl;  
  }
  else {
    cout << ((int)paces) << endl;
  }

  return 0;
}
