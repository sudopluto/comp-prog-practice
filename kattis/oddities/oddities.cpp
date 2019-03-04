#include <iostream>
#include <string>

using namespace std;

int main(void) {
  
  int num_tests;

  cin >> num_tests;

  for(int ii = 0; ii < num_tests; ++ii) {
    int temp;
    cin >> temp;

    string output = (temp % 2 == 0) ? (to_string(temp) + " is even") : (to_string(temp) + " is odd");
    cout << output << endl;
  }

  return 0;
}
