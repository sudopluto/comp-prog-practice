#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

  int h, v;

  cin >> h >> v;

  double len = h / sin((v * M_PI) / 180); 

  int int_len = (int) len;

  int_len = (int_len < len) ? int_len + 1 : int_len;


  cout << int_len << endl;

  return 0;
}
