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
  cout << "Enter your middle initial: " << endl;
  middleInitial = cin.get(); // get first character only
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers

  string lName;
  cout << "Enter your last name: " << endl;
  getline(cin, lName); // get entire line

  string address;
  cout << "Enter your address: " << endl;
  getline(cin, address);

  string city;
  cout << "Enter your city: " << endl;
  getline(cin, city); // get entire line

  string state;
  cout << "Enter your two letter state abbreviation: " << endl;
  state = cin.get();
  state += cin.get();
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers
  // getline(cin, state); // get entire line

  string zipCode;
  cout << "Enter your zip code: " << endl;
  getline(cin, zipCode);

  cout << "\n" << endl;

  cout << "=== Entry ===" << endl;
  cout << fName + ' ' + middleInitial + ". " + lName + '\n'
       << city + ", " + state + ", " + zipCode + '\n';

  return 0;
}