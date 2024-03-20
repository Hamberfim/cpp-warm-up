/* Name: Guest Book
 * Author: Anthony Hamlin - My Modification of Murach's C++ chapt2 exercise
 * Description:
 * This program prompts a user to enter information for a guest book entry.
 */
#include "entrydisplay.h"
#include "validation.h"
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

// prompt user for need info
void GetUserEntry(string &fName, char &middleInitial, string &lName,
                  string &address, string &city, string &state,
                  string &zipCode) {
  cout << "Enter your first name: " << endl;
  cin >> fName;                                        // get first string only
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers

  // validate fName on fail ask again
  while (!isValidName(fName)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your first name: " << endl;
    cin >> fName; // get first string only
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers
  }

  cout << "Enter your middle initial: " << endl;
  middleInitial = cin.get(); // get first character only
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers

  // validate initial on fail ask again
  while (!isValidInitial(middleInitial)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your middle initial: " << endl;
    middleInitial = cin.get(); // get first character only
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers
  }

  cout << "Enter your last name: " << endl;
  getline(cin, lName); // get entire line

  // validate lName on fail ask again
  while (!isValidName(lName)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your last name: " << endl;
    getline(cin, lName); // get entire line
  }

  cout << "Enter your address: " << endl;
  getline(cin, address);

  cout << "Enter your city: " << endl;
  getline(cin, city); // get entire line

  // validate city on fail ask again
  while (!isValidName(city)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your city: " << endl;
    getline(cin, city); // get entire line
  }

  cout << "Enter your two letter state abbreviation: " << endl;
  state = cin.get();                                   // get first char
  state += cin.get();                                  // get second char
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers

  // validate state on fail ask again
  while (!isValidState(state)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your two letter state abbreviation: " << endl;
    state = cin.get();                                   // get first char
    state += cin.get();                                  // get second char
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard leftovers
  }

  cout << "Enter your zip code: " << endl;
  getline(cin, zipCode);
  // validate zip on fail ask again
  while (!isValidZip(zipCode)) {
    cerr << "Error! Input can only contain exactly 5 numbers." << endl;
    cin.clear();
    cout << "Enter your zip code: " << endl;
    getline(cin, zipCode);
  }
}

int main(void) {

  // title
  cout << "\n=== Guest Book ===\n" << endl;

  string fName;
  char middleInitial;
  string lName;
  string address;
  string city;
  string state;
  string zipCode;

  GetUserEntry(fName, middleInitial, lName, address, city, state, zipCode);

  guestEntryDisplay(fName, middleInitial, lName, address, city, state, zipCode);

  return 0;
}
