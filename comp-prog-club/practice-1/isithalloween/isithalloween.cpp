#include <iostream>
#include <string>
using namespace std;

int main(void){

  string month;
  cin >> month;
  if (month == "OCT"){
    int day;
    cin >> day;
    if (day == 31) {
      cout << "yup" << endl; 
      return 0;
    }
    
  }
  else if (month == "DEC"){
    int day;
    cin >> day;
    if (day == 25) {
      cout << "yup" << endl; 
      return 0;
    }
    
  }

  cout << "nope" << endl;

  return 0;
}
