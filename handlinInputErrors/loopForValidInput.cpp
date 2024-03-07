/* File: loopForValidInput.cpp
 * Author: Hamberfim
 * This program demonstrates a loop that continues until the user enters the
 * correct input. The program asks the user to enter a number between 1 and 100.
 * If the user enters a number that is less than 1 or greater than 100,
 * the program tells the user that the number is invalid and asks the user to
 * enter a new number.
 */
#include <iostream>
#include <limits>

using namespace std;

int main(void) {
  double number;

  while (true) {
    cout << "Enter a number between 1 and 100: ";
    cin >> number;

    // check if extraction operation failed
    if (cin.fail()) {
      cout << "That's not a valid number. Try again. \n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    if (number < 1) {
      cout << "The number must be greater than zero. Try again. \n";
    } else if (number > 100) {
      cout << "The number must be 100 or less. Try again. \n";
    } else {
      // number is within the range, exit loop
      break;
    }
  }

  cout << "Your number is " << number << endl;
  return 0;
}