#include<iostream>

using namespace std;

int main() {

  int n;

  cin >> n;

  int max_a;
  int min_b;
  
  for (int ii = 0; ii < n; ++ii) {
    
     int a;
     int b;
     cin >> a >> b;

     if (ii == 0) {
      max_a = a;
      min_b = b;
     }
     else {
     
       if (a > max_a) {
          max_a = a; 
       }

       if (b < min_b) {
          min_b = b;
       }
     
     }

  }

  if (max_a <= min_b) {
    cout << "gunilla has a point" << endl; 
  }
  else {
    cout << "edward is right" << endl; 
  }

  return 0;
}
