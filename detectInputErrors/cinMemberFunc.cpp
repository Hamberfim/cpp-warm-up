/* File: cinCheckState.cpp
 * Author: Hamberfim
 * Description: This file uses error member functions to check state of a stream
 * to determine if input is valid.
 */
#include <iostream>
#include <limits>

using namespace std;

int main(void) {
  double number;
  cout << "Enter a number: ";
  cin >> number;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (cin.good()) {
    cout << "Your number was " << number << endl;
  } else if (cin.fail()) {
    cout << "Not a valid number. \n";
  } else if (cin.bad()) {
    cout << "Fatal error, exiting. \n";
    return 0;
  }

  return 0;
}