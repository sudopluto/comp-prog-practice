#include <iostream>

using namespace std;

int main(void) {

  int num;
  int den;


  while (cin >> num >> den && !(num == 0 && den == 0)) {
    cout << (num / den) << " " << (num % den) << " / " << den << endl;
  }

  return 0;
}
