/* Program Name: vectorArrays.cpp
   Author: Anthony Hamlin
   Description: Vector array practice
   Compile/Makefile setting:
vectorArrays: vectorArrays.cpp
    g++ -g -ggdb -Wall -Wextra --std=c++20 -o vectorArrays.exe vectorArrays.cpp
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {

  // init a vector array
  vector<int> vec(3, 100);

  // display some info about the vector array
  cout << "Vector size: " << vec.size() << endl;
  cout << "Is Empty (1=true/0=false): " << vec.empty() << endl;
  cout << "First element: " << vec.at(0) << endl;

  // add some additional index elements to the vector array
  vec.push_back(200);
  vec.push_back(300);
  vec.push_back(111);

  // display the changes
  cout << "Vector size: " << vec.size() << endl;
  cout << "Last element: " << vec.back() << endl;
  // pop off the last index element of the vector array
  vec.pop_back();

  // display the change
  cout << "Vector size: " << vec.size() << endl;
  cout << "Last element: " << vec.back() << endl;

  // clear the vector array of all elements
  vec.clear();

  // display the change
  cout << "Vector size: " << vec.size() << endl;

  return 0;
}