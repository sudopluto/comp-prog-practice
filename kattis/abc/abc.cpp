#include <iostream>

using namespace std;

int main(void) {

  int nums[3];
  int order[3];

  for (int ii = 0; ii < 3; ++ii) {
    int n;
    cin >> n;
    nums[ii] = n;
  }

  for (int ii = 0; ii < 2; ++ii) {
    int swp_idx = ii;
    int min = nums[ii];
    for (int jj = 1; jj < 3; ++jj) {
      if (min > nums[jj]) {
        swp_idx = jj; 
        min = nums[jj];
      } 
    } 
    if (swp_idx != ii) {
      int temp = nums[ii];
      nums[ii] = nums[swp_idx];
      nums[swp_idx] = temp;
    }
  }

  for (int ii = 0; ii < 3; ++ii) {
    char l;
    cin >> l;
    order[ii] = (l == 'A') ? 0 : ((l == 'B') ? 1 : 2);
  }

  for (int ii = 0; ii < 3; ++ii) {
    if (ii != 0) {
      cout << " ";
    }
    cout << nums[order[ii]];
  }

  cout << endl;

  return 0;
}
