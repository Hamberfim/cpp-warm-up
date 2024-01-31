#include <iostream>
using namespace std;

int main(void) {
  // Pi as a constant variable
  const double PI = 3.1415926536;
  cout << "A 6\" circle's circumference is " << (PI * 6) << " inches." << endl;

  // enumerated constant list with declare values for points
  enum { RED = 10, WHITE = 1, BLACK = 2, BLUE = 5 };
  cout << "Tom shot 1 red and 1 black worth " << (RED + BLACK) << endl;
  cout << "Sid shot 2 blue and 1 white worth " << (BLUE + BLUE + WHITE) << endl;

  // custom type definition
  typedef enum { NEGATIVE, POSITIVE } PolarCharge;
  PolarCharge neutral = NEGATIVE;
  PolarCharge live = POSITIVE;
  cout << "Neutral wire: " << neutral << endl;
  cout << "Hot wire: " << live << endl;

  return 0;
}