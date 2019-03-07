#include <iostream>

using namespace std;

int main(void) {

  int hour = 24;
  int min = 60;
  int before = 45;

  int h, m;
  cin >> h >> m;

  bool recalc_hour = (m < before);

  m = (((m - before) % min) + min) % min;

  if (recalc_hour) {h = (((h - 1) % hour) + hour) % hour;}
  
  cout << h << " " << m << endl;

  return 0;
}
