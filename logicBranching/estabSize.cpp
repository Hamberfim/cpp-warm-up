#include <iostream>
using namespace std;


int main(void) {
    int num, nums[50];
    float deci;
    double pi;
    unsigned int max;
    short int snum;
    bool isTrue;
    char letter, letters[50];

    cout << "int size: " << sizeof(num) << " bytes" << endl;
    cout << "50 int size: " << sizeof(nums) << " bytes" << endl;
    cout << "float size: " << sizeof(deci) << " bytes" << endl;
    cout << "double size: " << sizeof(pi) << " bytes" << endl;
    cout << "unsigned int size: " << sizeof(max) << " bytes" << endl;
    cout << "short int size: " << sizeof(snum) << " bytes" << endl;
    cout << "boolean size: " << sizeof(isTrue) << " bytes" << endl;
    cout << "char size: " << sizeof(letter) << " bytes" << endl;
    cout << "50 char size: " << sizeof(letters) << " bytes" << endl;
    
    return 0;}