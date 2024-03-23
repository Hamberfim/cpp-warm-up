/* Name: Invoice Calculator - modified chapt 3 Murach's C++
 * Author: Hamberfim
 * Description:
 * This program calculates the users invoice.
 */
#include <cmath>
#include <iostream>
#include <limits>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::numeric_limits;
using std::streamsize;

bool isValidCustomerType(char customer_type) {
  if (customer_type == '\0' || customer_type == '\n') {
    return false;
  }

  if (customer_type >= '0' && customer_type <= '9') {
    return false;
  }

  if (tolower(customer_type) != 'r' || tolower(customer_type) != 'w') {
    return false;
  }

  return true;
}

int main(void) {

  // title
  cout << "=== Invoice Total Calculator ===" << endl;

  // var declarations
  char customer_type;
  double subtotal;
  double discount_percent;
  double discount_amount;
  double invoice_total;

  // get user input
  cout << "Enter Customer Type (r/w): " << endl;
  customer_type = cin.get();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // validate input
  while (!isValidCustomerType(customer_type)) {
    cerr << "Error! Input must be either 'r' or 'w'." << endl;
    cin.clear();
    cout << "Enter Customer Type (r/w):" << endl;
    customer_type = cin.get();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  cout << "Enter your subtotal: " << endl;
  cin >> subtotal;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  while (subtotal < 0) {
    cerr << "Error! Subtotal must be a positive number." << endl;
    cin.clear();
    cout << "Enter your subtotal: " << endl;
    cin >> subtotal;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  // set discount

  // calculate invoice

  // display output

  // main return
  return 0;
}