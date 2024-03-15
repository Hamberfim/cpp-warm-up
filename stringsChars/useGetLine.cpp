/* Author: Hamberfim
 * Using getline() and validation
 */
#include <iostream>
#include <limits>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;

// validate name input
bool isValidName(string name) {
  // if the input has no length it's empty
  if (name.length() == 0) {
    return false;
  }

  // check each character for a numeric value 0-9
  for (unsigned int i = 0; i < name.length(); i++) {
    if (name[i] >= '0' && name[i] <= '9') {
      return false; // number in the name
    }
  }
  return true;
}

int main(void) {
  string name = "";
  cout << "Enter your name: " << endl;
  getline(cin, name);

  // call function to see if the input is valid
  while (!isValidName(name)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    // not needed since getline handles spaces and newlines
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter your name: " << endl;
    getline(cin, name);
  }

  cout << "Hello, " << name << "." << endl;

  return 0;
}