#include <iostream>
#include <vector>



using namespace std;


bool contains_element_vec_int(vector<int> vec, int find) {
  for(int ii = 0; ii < vec.size(); ++ii) {
    if (vec[ii] == find) {
      return true; 
    }
  }
  return false; 
}


int main() {

  int num_cities;
  cin >> num_cities;

  for (int ii = 0; ii < num_cities; ++ii) {
    int num_road_endpoints;
    cin >> num_road_endpoints;
    int num_pairs;
    cin >> num_pairs;


    vector<vector<int>> network(num_road_endpoints);
    for (int jj = 0; jj < num_pairs; ++jj) {
      int end_a;
      int end_b;
      cin >> end_a >> end_b;

      network[end_a].push_back(end_b);

      network[end_b].push_back(end_a);
    // network now has all existing roads
    //
    // now we need to add all roads acessable 
    
    for (int ii = 0; ii < num_paris; ++ii) {
      `` 
    }
  }
  return 0;
}
