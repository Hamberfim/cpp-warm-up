#include <iostream>
using namespace std;

int main(void) {
  float nums[3];

  nums[0] = 1.5;
  nums[1] = 2.75;
  nums[2] = 3.52;

  char name[5] = {'M', 'i', 'k', 'e', '\0'};

  int coords[2][3] = {{1, 2, 3}, {4, 5, 6}};

  cout << "nums[0]: " << nums[0] << endl;
  cout << "nums[1]: " << nums[1] << endl;
  cout << "nums[2]: " << nums[2] << endl;

  cout << "Name[0]: " << name[0];
  cout << ", Name[1]: " << name[1];
  cout << ", Name[2]: " << name[2];
  cout << ", Name[3]: " << name[3] << endl;

  cout << "Name as string: " << name << endl;

  cout << "coords[0][1]: " << coords[0][1] << endl;
  cout << "coords[1][2]: " << coords[1][2] << endl;

  return 0;
}