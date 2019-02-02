#include<iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  for (int ii = 0; ii < n; ++ii) {
  
    int m;
    cin >> m;

    unsigned long sum = 0;
    for (int jj = 0; jj < m; ++jj) {
      unsigned long cand;
      cin >> cand;

      sum = (sum + cand) % m;
    
    }

    if (sum % m == 0) {
      cout << "YES" << endl; 
    }
    else {
      cout << "NO" << endl; 
    }
  
  }

  return 0;
}
