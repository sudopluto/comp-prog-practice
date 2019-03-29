#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {

  int num_obs;
  cin >> num_obs;


  double posted_sum = 0;
  double actual_sum = 0;

  for (int ii = 0; ii < num_obs; ++ii) {
    // minutes
    int posted_wait;
    // seconds
    int actual_wait;

    cin >> posted_wait >> actual_wait;

    posted_sum += posted_wait;
    actual_sum += (actual_wait / 60.0);

  }

  double avg = actual_sum / posted_sum;

  if (avg <= 1) {
    cout << "measurement error" << endl; 
  }
  else {
    cout << fixed << setprecision(9) << avg << endl; 
  }

  return 0;
}
