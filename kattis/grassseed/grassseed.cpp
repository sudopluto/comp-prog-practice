#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {

  double c, l;
  cin >> c >> l;

  double tot_area = 0;
  for (int ii = 0; ii < l; ++ii) {
    double w, h;
    cin >> w >> h;
    tot_area += w * h; 
  }

  cout << setprecision(8) << tot_area * c << endl;
  return 0;
}
