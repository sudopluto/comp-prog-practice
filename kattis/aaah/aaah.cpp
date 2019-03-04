#include <iostream>
#include <string>

using namespace std;


int main(void) {
 
  string jon;
  string doc;

  cin >> jon >> doc; 

  string output = (jon.find(doc) == string::npos) ? "no" : "go";

  cout << output << endl;
  

  return 0;
}
