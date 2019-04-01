#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

  int n, w, h;
  cin >> n >> w >> h;

  double diag = sqrt((w * w) + (h * h));

  for (int ii = 0; ii < n; ++ii) {
    int temp;
    cin >> temp;

    if (temp <= diag) {
      cout << "DA" << endl; 
    }
    else {
      cout << "NE"  << endl;
    }
  
  }

  return 0;
}
