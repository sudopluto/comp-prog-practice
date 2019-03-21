#include <iostream>

using namespace std;


int main(void) {
  
  int n;
  

  while (cin >> n && n != -1) {
 
    unsigned int total_miles = 0;
    unsigned int total_time = 0;
    for(int ii = 0; ii < n; ++ii) {
      int speed; 
      int new_total_time;
      
      cin >> speed >> new_total_time;

      total_miles += (speed * (new_total_time - total_time));
      total_time = new_total_time;
    }
    cout << total_miles << " miles" << endl;

  }

  return 0;
}
