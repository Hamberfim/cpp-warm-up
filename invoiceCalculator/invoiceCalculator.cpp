/* Name: Invoice Calculator - modified chapt 3 Murach's C++
 * Author: Hamberfim
 * Description:
 * This program calculates the users invoice.
 */
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::getline;
using std::numeric_limits;
using std::setprecision;
using std::streamsize;

// functions
bool isValidCustomerType(char customer_type) {
  if (customer_type == '\0' || customer_type == '\n') {
    return false;
  }

  if (customer_type >= '0' && customer_type <= '9') {
    return false;
  }

  // only time its true
  if (tolower(customer_type) == 'r' || tolower(customer_type) == 'w') {
    return true;
  }

  return false;
}

// determine discount
double customerDiscount(char customer_type, double subtotal) {
  // set discount based on customer type
  if (tolower(customer_type) == 'r') {
    // discount ranges
    // refactor
    return (subtotal >= 100 && subtotal < 250)
               ? .1
               : .2; // otherwise .0 at call of func ternary;
  } else if (tolower(customer_type) == 'w') {
    // discount ranges
    // refactored
    return subtotal < 500 ? .4 : .5;
  } else {
    return .0;
  }
}

// display invoice
void DisplayInvoice(double subtotal, double discount_percent,
                    double discount_amount, double invoice_total) {
  // display output
  cout << "\n======= Your Invoice =======" << endl;
  cout << "Subtotal:           $" << fixed << setprecision(2) << subtotal
       << endl;
  cout << "Discount percent:   " << fixed << setprecision(0)
       << (discount_percent * 100) << "%" << endl;
  cout << "Discount amount:    $" << fixed << setprecision(2) << discount_amount
       << endl;
  cout << "Invoice total:      $" << fixed << setprecision(2) << invoice_total
       << '\n'
       << endl;
}

int main(void) {

  // title
  cout << "=== Invoice Total Calculator ===" << endl;

  // var declarations
  char customer_type;
  double subtotal;
  double discount_percent = .0;
  double discount_amount;
  double invoice_total;

  // get user input
  cout << "Enter customer type is wholesale or retail (r/w): " << endl;
  customer_type = cin.get(); // just get the first letter
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

  discount_percent =
      (subtotal < 100) ? .0 : customerDiscount(customer_type, subtotal);

  // calculate invoice
  discount_amount = subtotal * discount_percent;
  invoice_total = subtotal - discount_amount;

  DisplayInvoice(subtotal, discount_percent, discount_amount, invoice_total);

  // main return
  return 0;
}
