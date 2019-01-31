#include <iostream>

using namespace std;

int main() {

  int num_per;
  cin >> num_per;

  double qaly = 0;
  for (int ii = 0; ii < num_per; ++ii) {
    double qual;
    double length;
    cin >> qual; 
    cin >> length; 

    qaly += (qual * length);
  }

  cout << qaly << endl;

  return 0;
}
