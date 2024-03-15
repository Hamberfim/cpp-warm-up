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

int main(void) {
  int account_num;
  cout << "Enter account number: " << endl;
  // cin will extract the input data but leaves the newline char in the stream
  cin >> account_num;

  string name;
  cout << "Enter name: " << endl;
  // will discard the newline char that's been left in the stream
  cin.ignore();
  //  because of the above ignore(), getline() can read more user input instead
  //  of processing the newline char that was left in the stream by cin which
  //  would display an empty string
  getline(cin, name);

  cout << "Name: " << name << " | Account: " << account_num << endl;

  return 0;
}