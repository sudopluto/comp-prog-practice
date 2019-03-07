#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

  int terms;
  cin >> terms;

  long sum = 0;
  for (int ii = 0; ii < terms; ++ii) {
    long term;
    cin >> term;
    long exp = term % 10;
    term /= 10;

    sum += pow(term, exp);
  }

  cout << sum << endl;
  return 0;
}
