#include <iostream>
#include <unordered_set>
using namespace std;

int main(void) {
  
  unordered_set<int> nums = {};

  for (int ii = 0; ii < 10; ++ii) {
    int temp;
    cin >> temp;
    temp %= 42;
    if (nums.find(temp) == nums.end()) {
      nums.emplace(temp); 
    }

  }

  cout << nums.size() << endl;

  return 0;
}
