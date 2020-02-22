#include <iostream>
#include <vector>
#include <cmath>
#include <list>

using namespace std;

double dist(pair<double, double> p1, pair<double, double> p2) {
  return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2)); 
}

int main(void) {
  int num_pts;
  cin >> num_pts;

  vector<pair<double, double>> points = {};

  for (int i = 0; i < num_pts; ++i) {
    pair<double, double> point;
    cin >> point.first;
    cin >> point.second;
  
    points.push_back(point);
  }

  // now we have vector pair of size n with all the points
  
  // need to use Euclidean distances
  
  // need to output the indexes of the points visited (in order)
 
  // 
  

  
  return 0;
}
