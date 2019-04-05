#include <iostream>

using namespace std;


bool sum_dig_X(int num, int X) {
  int sum = 0;
  while (num != 0) {
    sum += (num % 10);
    num /= 10;
  }

  return sum == X;

}

int main(void) {

  int L, D, X;

  cin >> L >> D >> X;

  int min = 0;
  int max = 0;

  for (int ii = L; ii <= D; ++ii) {
    if (sum_dig_X(ii, X)) {
      min = ii;
      break;
    }
  }

  for (int ii = D; ii >= L; --ii) {
    if (sum_dig_X(ii, X)) {
      max = ii;
      break;
    }
  }


  cout << min << endl << max << endl;

  return 0;
}
