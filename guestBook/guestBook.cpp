#include <iostream>
#include <limits>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;

int main(void) {
  // title
  cout << "\n=== Guest Book ===\n" << endl;

  string fName;
  cout << "Enter your first name: " << endl;
  cin >> fName;                                        // get first string only
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers

  char middleInitial;
  cout << "Enter you middle initial: " << endl;
  middleInitial = cin.get(); // get first character only
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers

  string lName;
  cout << "Enter last name: " << endl;
  getline(cin, lName); // get entire line

  string city;
  cout << "Enter city: " << endl;
  getline(cin, city); // get entire line

  string state;
  cout << "Enter State: " << endl;
  getline(cin, state); // get entire line

  cout << "\n\n" << endl;

  cout << "=== Entry ===" << endl;
  cout << fName + ' ' + middleInitial + ". " + lName + '\n'
       << city + ", " + state + '\n';

  return 0;
}