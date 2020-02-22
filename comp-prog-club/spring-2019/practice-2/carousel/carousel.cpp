#include<iostream>
#include<string>

using namespace std;

int main() {

  // number of line
  int n;

  // no more - less than equal 
  int m;


  cin >> n >> m;

  while (n != 0 && m!= 0) {

    double min_price_per = -1;

    int min_a;
    int min_b;

    for (int ii = 0; ii < n; ++ii) {
      int a;
      int b;
      cin >> a >> b;
      if (a <= m) {
        double test = b / (a * 1.0);
        if (test < min_price_per || min_price_per == -1) {
          min_price_per = test;
          min_a = a;
          min_b = b;
        }
        else if (test == min_price_per && a > min_a) {
          min_price_per = test;
          min_a = a;
          min_b = b;
        }
      } 
    }

    if (min_price_per == -1) {
      cout << "No suitable tickets offered" << endl;
    }
    else {
      cout << "Buy " << min_a << " tickets for $" << min_b << endl;
    }

    cin >> n >> m;
  }


  return 0;
}
