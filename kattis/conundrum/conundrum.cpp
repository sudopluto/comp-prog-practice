#include <iostream>
#include <string>

using namespace std;

int main() {

  string line;

  cin >> line;

  int count = 0;
  string PER = "PER";
  for(int ii = 0; ii < line.length(); ++ii) {
    if (line[ii] != PER[ii % 3]) {
      ++count; 
    } 
  }
  
  cout << count << endl;

  return 0;
}
