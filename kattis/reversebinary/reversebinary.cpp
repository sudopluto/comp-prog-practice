#include <iostream>

using namespace std;

int main(void) {

  unsigned int n;

  cin >> n;

  unsigned int rev = 0;

  while(n > 0) {
    rev <<= 1;

    if(n & 1 == 1) {
      ++rev; 
    }

    n >>= 1;

  }

  cout << rev << endl;

  return 0;
}
