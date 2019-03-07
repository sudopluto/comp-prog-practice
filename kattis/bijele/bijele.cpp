#include <iostream>

using namespace std;

int main(void) {
  
  int pieces[] = {1, 1, 2, 2, 2, 8};
  int sz = 6;

  for (int ii = 0; ii < sz; ++ii) {
    int temp;
    cin >> temp;
    if (ii != 0) {
      cout << " ";
    }
    cout << (pieces[ii] - temp);
  }

  cout << endl;

  return 0;
}
