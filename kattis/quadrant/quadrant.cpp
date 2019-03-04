#include <iostream>

using namespace std;


int main(void) {

  int x, y;

  cin >> x >> y;

  int x_pos = (x > 0) ? 0 : 1;
  int y_pos = (y > 0) ? 0 : 1;

  int quads[2][2] = {{1, 4},
                   {2, 3}};


  cout << quads[x_pos][y_pos] << endl;

  return 0;
}
