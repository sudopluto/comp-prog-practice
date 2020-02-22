#include <iostream>
#include <vector>

using namespace std;

int main() {

  int tests;
  cin >> tests;

  for (int ii = 0; ii < tests; ++ii) {
    int total_days; 
    int num_months; 
    cin >> total_days >> num_months;

    vector<int> days_per = {};

    for (int jj = 0; jj < num_months; ++jj) {
      int temp;
      cin >> temp;
      days_per.push_back(temp);
    }

    // now we have total days
    // number of months
    // and the days per month

    // 0 = sunday
    // 6 = saturday
    
    int num_friday_13s = 0;

    int curr_month = 0;
    int day_in_month = 1;

    for (int jj = 0; jj < total_days; ++jj){
      if((day_in_month == 13) && (jj % 7 == 5)) {
        ++num_friday_13s; 
      }

      if (day_in_month == days_per.at(curr_month)) {
        day_in_month = 1;
        ++curr_month;
      }
      else {
        ++day_in_month;
      }
    }

    cout << num_friday_13s << endl;
  
  }

  return 0; 
}
