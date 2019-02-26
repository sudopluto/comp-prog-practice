#include <iostream>

using namespace std;

int main(void) {

  int n;
  cin >> n;

  int num = 0;
  for (int ii = 0; ii < n; ++ii) {
    long temp; 
    cin >> temp;
    if (temp < 0) { ++num;}
  }

  cout << num << endl;

  return 0;
}
