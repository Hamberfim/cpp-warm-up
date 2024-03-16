/* Name: Guest Book
 * Author: Anthony Hamlin - My Modification of Murach's C++ chapt2 exercise
 * Description:
 * This program prompts a user to enter information for a guest book entry.
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

// validate string names
bool isValidName(string name) {
  // check if string is empty
  if (name.length() == 0) {
    return false;
  }

  // check if string contains any numbers
  for (unsigned int i = 0; i < name.length(); i++) {
    if (name[i] >= '0' && name[i] <= '9') {
      return false;
    }
  }

  return true;
}

bool isValidInitial(char middleInitial) {
  if (middleInitial == '\0' || middleInitial == '\n') {
    return false;
  }

  if (middleInitial >= '0' && middleInitial <= '9') {
    return false;
  }

  return true;
}

bool isValidState(string state) {
  if (state.length() == 0) {
    return false;
  }

  for (unsigned int i = 0; i < state.length(); i++) {
    if (state[i] >= '0' && state[i] <= '9') {
      return false;
    }
  }

  return true;
}

// validate string zip code - 5 character
bool isValidZip(string zipCode) {
  // is the string empty
  if (zipCode.length() == 0) {
    return false;
  }

  // is the string 5 in length
  if (zipCode.length() > 0 && zipCode.length() < 5) {
    return false;
  }

  // is the string to long
  if (zipCode.length() > 5) {
    return false;
  }

  // is the string only numbers
  for (unsigned int i = 0; i < zipCode.length(); i++) {
    if (zipCode[i] >= '0' && zipCode[i] <= '9') {
      return true; // number in the name
    } else {
      return false;
    }
  }
  return true;
}

/* FIX: Length of main - refactor by extracting some code to functions */
int main(void) {
  // title
  cout << "\n=== Guest Book ===\n" << endl;

  string fName;
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

  char middleInitial;
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

  string lName;
  cout << "Enter your last name: " << endl;
  getline(cin, lName); // get entire line

  // validate lName on fail ask again
  while (!isValidName(lName)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your last name: " << endl;
    getline(cin, lName); // get entire line
  }

  string address;
  cout << "Enter your address: " << endl;
  getline(cin, address);

  string city;
  cout << "Enter your city: " << endl;
  getline(cin, city); // get entire line

  // validate city on fail ask again
  while (!isValidName(city)) {
    cerr << "Error! Input can not contain numbers." << endl;
    cin.clear();
    cout << "Enter your city: " << endl;
    getline(cin, city); // get entire line
  }

  string state;
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

  string zipCode;
  cout << "Enter your zip code: " << endl;
  getline(cin, zipCode);
  // validate zip on fail ask again
  while (!isValidZip(zipCode)) {
    cerr << "Error! Input can only contain exactly 5 numbers." << endl;
    cin.clear();
    cout << "Enter your zip code: " << endl;
    getline(cin, zipCode);
  }

  cout << "\n" << endl;

  cout << "=== Entry ===" << endl;
  cout << fName + ' ' + middleInitial + ". " + lName + '\n'
       << city + ", " + state + ", " + zipCode + '\n';

  return 0;
}