#include <iostream>
#include <unordered_map>
#include <string>
#include <locale>

using namespace std;

int main(void) {
  
  unordered_map<char, string> mappings = {
    {'a', "@"}, 
    {'b', "8"}, 
    {'c', "("}, 
    {'d', "|)"}, 
    {'e', "3"}, 
    {'f', "#"}, 
    {'g', "6"}, 
    {'h', "[-]"}, 
    {'i', "|"}, 
    {'j', "_|"}, 
    {'k', "|<"}, 
    {'l', "1"}, 
    {'m', "[]\\/[]"}, 
    {'n', "[]\\[]"}, 
    {'o', "0"}, 
    {'p', "|D"}, 
    {'q', "(,)"}, 
    {'r', "|Z"}, 
    {'s', "$"}, 
    {'t', "']['"}, 
    {'u', "|_|"}, 
    {'v', "\\/"}, 
    {'w', "\\/\\/"}, 
    {'x', "}{"}, 
    {'y', "`/"}, 
    {'z', "2"}, 
  };

  string input;
  getline(cin, input);

  string output = "";

  for (int ii = 0; ii < input.length(); ++ii) {
    char in = tolower(input[ii]);
    if (mappings.find(in) != mappings.end()) {
      output += mappings[in]; 
    }
    else {
      output += in; 
    }
  }

  cout << output << endl;
  return 0;
}
