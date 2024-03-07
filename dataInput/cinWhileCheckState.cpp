/* File: cinWhileCheckState.cpp
 * Author: Hamberfim
 * Description: This file uses a while loop and the check state of the cin
 * object to determine if input is valid, if not valid it asks for input again
 * until it is valid.
 */
#include <iostream>
#include <limits>

using namespace std;

int main(void) {
  double number1;
  cout << "Enter a number: " << endl;
  cin >> number1;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  while (!cin) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "You did not enter a valid number." << endl;

    cout << "Enter a number: " << endl;
    cin >> number1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  cout << "Your number was " << number1 << endl;

  return 0;
}