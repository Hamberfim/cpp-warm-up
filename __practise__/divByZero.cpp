/* testing make file Sanitize for divide by zeror error, vs valgrind */
#include <iostream>
using std::cout;
using std::endl;

int main(void) {
  int num1 = 16;
  int numZeror = 0;

  cout << num1 / numZeror << endl;

  return 0;
}