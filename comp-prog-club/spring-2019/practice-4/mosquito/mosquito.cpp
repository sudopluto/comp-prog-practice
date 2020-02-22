#include <iostream>

using namespace std;

int main() {

  // mos, pupae, larvae
  unsigned long M;
  unsigned long P;
  unsigned long L;

  // eggs per
  unsigned int E;
  
  // larvae rate, pupae rat
  unsigned int R;
  unsigned int S;

  // number of weeks
  unsigned int N;

  while(cin >> M >> P >> L >> E >> R >> S >> N) {
    
    for (unsigned int week = 0; week < N; ++week) {
      unsigned int eggs = M * E;
      M = P / S;
      P = L / R;
      L = eggs;
    }
  
    cout << M << endl;
  }

  return 0;
}
