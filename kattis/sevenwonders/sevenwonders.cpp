#include <iostream>
#include <unordered_map>

using namespace std;

int main(void) {

  unordered_map<char, int> hist = {
    {'T', 0}, 
    {'C', 0}, 
    {'G', 0}
  };

  char c;
  while (cin >> c) {
    ++hist[c];
  }



  int min = -1;
  int score = 0;
  for (auto i : hist) {
    if (min == -1 || min > i.second) {
      min = i.second; 
    }
    score += (i.second * i.second);
  }

  score += (7 * min);

  cout << score << endl;

  return 0;
}

