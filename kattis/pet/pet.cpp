#include <iostream>

using namespace std;

int main(void) {

  int num_contestant = 5;

  int winner = 0;
  int score = 0;


  for (int ii = 0; ii < num_contestant; ++ii) {
    int cont_score = 0;
    for (int jj = 0; jj < num_contestant -1; ++ jj) {
      int rating;
      cin >> rating;
      cont_score += rating;
    }

    if (cont_score > score) {
      winner = ii + 1; 
      score = cont_score;
    }
  
  }

  cout << winner << " " << score << endl;

  return 0;
}
