#include<iostream>

using namespace std;

int main() {


 int n;

 cin >> n;

 int count = 0;
 int hits = 0;
 for (int ii = 0; ii < n; ++ii) {
    int stat;

    cin >> stat;

    if (stat != -1) {
      count++; 
      hits += stat;
    }
 }

 cout << (hits / (count * 1.0)) << endl;
 return 0;
}
