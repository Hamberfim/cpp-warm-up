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

// function prototypes
bool isValidCustomerType(char customer_type);
double customerDiscount(char customer_type, double subtotal);

// functions
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

double customerDiscount(char customer_type, double subtotal) {
  // set discount based on customer type
  if (tolower(customer_type) == 'r') {
    // discount ranges
    if (subtotal < 100) {
      return .0;
    } else if (subtotal >= 100 && subtotal < 250) {
      return .1;
    } else {
      return .2;
    }
  } else if (tolower(customer_type) == 'w') {
    // discount ranges
    if (subtotal < 500) {
      return .4;
    } else {
      return .5;
    }
  }
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

  discount_percent = customerDiscount(customer_type, subtotal);

  // calculate invoice
  discount_amount = subtotal * discount_percent;
  cout << discount_amount << endl;

  invoice_total = subtotal - discount_amount;
  cout << invoice_total << endl;

  // display output

  // main return
  return 0;
}
