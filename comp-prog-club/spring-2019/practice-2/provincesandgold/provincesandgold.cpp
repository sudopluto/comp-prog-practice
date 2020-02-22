#include<iostream>

using namespace std;
int main() {

  int g;
  int s;
  int c;

  cin >> g >> s >> c;

  int buying_power = (3 * g) + (2 * s) + c;

  string vic_card;

  string tresure_card;

  if (buying_power >= 8) {
    vic_card = "Province"; 
    tresure_card = "Gold";
  }
  else if (buying_power >= 6) {
    vic_card = "Duchy"; 
    tresure_card = "Gold";
  }
  else if (buying_power >= 5) {
    vic_card = "Duchy"; 
    tresure_card = "Silver";
  }
  else if (buying_power >= 3) {
    vic_card = "Estate"; 
    tresure_card = "Silver";
  }
  else if (buying_power >= 2) {
    vic_card = "Estate"; 
    tresure_card = "Copper";
  }
  else {
    cout << "Copper" << endl; 
    return 0;
  }

  cout << vic_card << " or " << tresure_card << endl;
  return 0;

}
