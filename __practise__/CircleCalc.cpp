/* Author: Hamberfim
 * This program calculates a circumference
 */
#include <cmath>
#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::pow;
using std::round;
using std::streamsize;

// function prototype
double CalculateCircle(double radius);

int main(void) {

  // display what the program is
  cout << "=== Circle Calculator ===" << endl << endl;

  // get radius input from user
  double radius;
  cout << "Enter radius:  ";
  cin >> radius;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // validate user input or ask for input again
  while (!cin) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "You didn't enter a valid number. Enter radius: " << endl;
    cin >> radius;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;
  }

  // call function to calculate and display
  CalculateCircle(radius);

  // return value to indicate normal exit
  return 0;
}

double CalculateCircle(double radius) {
  // calculations
  double PI = 3.14159;
  double diameter = radius * 2;
  double circumference = diameter * PI;
  double area = PI * pow(radius, 2.0);

  // round
  circumference = round(circumference * 20) / 20; // rounding to two decimals
  area = round(area * 10) / 10;                   // rounding to one decimal

  // display to console
  cout << "Diameter:      " << diameter << endl
       << "Circumference: " << circumference << endl
       << "Area:          " << area << endl
       << endl
       << "Exiting Program..." << endl
       << endl;
  ;

  return 0;
}