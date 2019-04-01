#include <iostream>
#include <string>

using namespace std;

int main(void) {

  int n;
  cin >> n;

  string simon = "Simon says";

  for (int ii = 0; ii < n + 1; ++ii) {
    string temp; 
    getline(cin, temp);
    if (temp.compare(0, simon.length(), simon) == 0) {
      cout << temp.substr(simon.length()) << endl; 
    }

  }

  return 0;
}
