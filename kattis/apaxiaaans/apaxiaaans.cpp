#include <iostream>
#include <string>

using namespace std;

int main(void) {

  string name;
  cin >> name;

  string temp = "";

  if (name.length() <= 1) {
    cout << name << endl;
    return 0;
  }
  
  for(int ii = 0; ii < name.length(); ++ii) {
    if (ii == name.length() -1 || name[ii] != name[ii + 1]) {
      temp.push_back(name[ii]);
    } 
  }
  
  cout << temp << endl;

  return 0;
}
