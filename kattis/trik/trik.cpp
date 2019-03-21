#include <iostream>
#include <string>

using namespace std;

int main(void) {

  string moves;

  cin >> moves;

  unsigned int pos = 0;

  for(int ii = 0; ii < moves.size(); ++ii) {
    switch (moves[ii]) {
      case 'A':
        if (pos == 0 || pos == 1) {pos = (pos + 1) % 2;}
        break;
      case 'B':
        if (pos == 1 || pos == 2) {pos = (pos % 2) + 1;}
        break;
      case 'C':
        if (pos == 0 || pos == 2) {pos = (pos + 2) % 4;}
        break;
    } 
  }

  cout << (pos + 1) << endl;


  return 0;
}
