#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main(void) {
  // simple use of break and continue
  bool choice = true; // alway true because we are using break
  char willContinue;
  while (choice) {
    cout << "Enter a number: " << endl;
    int numb;
    cin >> numb;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (cin.fail()) {
      cerr << "Error! Input must be a number." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    cout << "You entered " << numb << ".\n" << endl;

    cout << "Enter any letter to continue or 'n' to exit?" << endl;
    cin >> willContinue;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (tolower(willContinue) == 'y') {
      continue;
    } else if (tolower(willContinue) == 'n') {
      break;
    }
  }

  cout << "\nExiting bye." << endl;

  return 0;
}