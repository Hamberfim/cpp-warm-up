#include <iostream>
#include <limits>
#include <string>

using namespace std;

// display results
void guestEntryDisplay(const string &fName, char middleInitial,
                       const string &lName, const string &address,
                       const string &city, const string &state,
                       const string &zipCode) {

  cout << "\n" << endl;

  cout << "=== Guest Book Entry ===" << endl;
  cout << fName + ' ' + middleInitial + ". " + lName + '\n'
       << address + '\n'
       << city + ", " + state + ", " + zipCode + '\n';
}