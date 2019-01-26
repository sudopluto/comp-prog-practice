#include <iostream>
#include <string>

using namespace std;

int main(void) {
  
  string line;
  cin >> line;

  string accum = "";
  char lower_start = 'a';
  for(int i = 0; i < line.size(); ++i) {
    if (line[i] < lower_start && line[i] != '-') {
      accum += line[i];
    }
  }

  cout << accum << endl;

  return 0;
}
