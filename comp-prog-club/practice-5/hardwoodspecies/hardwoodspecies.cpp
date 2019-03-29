#include <iostream>
#include <map>

using namespace std;

int main(void) {

  map<string, int> hist;

  int count = 0;
  string tree;
  while (getline(cin, tree)) {
    ++count; 
    if (hist.find(tree) == hist.end()) {
      hist[tree] = 1; 
    }
    else {
      ++hist[tree];
    }
  }

  for (auto ii = hist.begin(); ii != hist.end(); ++ii) {
    cout << ii->first << " "  << (( ii->second / (count * 1.0)) * 100) << endl;
  }

  return 0;
}
