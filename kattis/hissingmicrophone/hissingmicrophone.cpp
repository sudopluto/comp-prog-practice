#include <iostream>
#include <string>

using namespace std;

int main(void) {

  string s;
  cin >> s;
  
  for (int ii = 0; ii < s.length() -1; ++ii) {
    if (s[ii] == 's' && s[ii +1] == 's') {
      cout << "hiss" << endl;  
      return 0;
    }
  }

  cout << "no hiss" << endl;

  return 0;
}
