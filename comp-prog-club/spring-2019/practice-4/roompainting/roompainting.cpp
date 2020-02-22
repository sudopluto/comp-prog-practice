#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

  unsigned long num_sizes;
  unsigned long num_colors;

  cin >> num_sizes >> num_colors;

  vector<unsigned long> store_sizes;
  vector<unsigned long> needed_sizes;

  for (int ii = 0; ii < num_sizes; ++ii) {
    unsigned long temp;
    cin >> temp;
    store_sizes.push_back(temp);
  }

  for (unsigned long ii = 0; ii < num_colors; ++ii) {
    unsigned long temp;
    cin >> temp;
    needed_sizes.push_back(temp);
  }

  // need to sort the sizes
  sort(store_sizes.begin(), store_sizes.end());

  // now we have an array of availbe sizes
  // and an array of sizes needed;
  
  unsigned long waste = 0;

  for(int ii = 0; ii < num_colors; ++ii) {
    bool found = false;
    for(int jj = 0; jj < num_sizes && !found; ++jj) {
      if (needed_sizes.at(ii) <= store_sizes.at(jj)) {
        waste += (store_sizes.at(jj) - needed_sizes.at(ii));
        found = true;
      }
    }
  
  }

  cout << waste << endl;
  
  return 0;
}
