/* File: cinCheckState.cpp
 * Author: Hamberfim
 * Description: This file uses the check state of the cin object to determine if
 * input is valid.
 */

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
  // use the cin object to check the state of the stream
  double number1;

  cout << "Enter a number: " << endl;
  cin >> number1;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (cin) {
    cout << "Your number was " << number1 << endl;
  } else {
    cout << "You did not enter a valid number." << endl;
  }

  return 0;
}