#include <iostream>
using namespace std;

int main() {
    int number_of_mb;
    cin >> number_of_mb;
    
    int num_months;
    cin >> num_months;
    int pool = number_of_mb * (1 + num_months);

    int sum = 0;
    int temp = 0;
    for(int i = 0; i < num_months; ++i) {
      cin >> temp;
      sum += temp;
    }

    cout << (pool - sum) << endl;

    return 0;
}
