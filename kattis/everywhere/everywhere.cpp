#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(void) {

  int t;

  cin >> t;

  for (int ii = 0; ii < t; ++ii) {
 
    unordered_set<string> cities = {};
    int c;
    int count = 0;
    cin >> c;
    for (int jj = 0; jj < c; ++jj) {
      string city;
      cin >> city;
      if (cities.find(city) == cities.end()) {
        cities.insert(city); 
        ++count;
      }
    } 

    cout << count << endl;

  }

  return 0;
}
