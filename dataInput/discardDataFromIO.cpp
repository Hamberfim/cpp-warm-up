/* Name: inputStreams.cpp 
 * Author: Hamberfim
 * Description: This program discards data from an input stream
 */

#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    int i;
    double d; 
    char c; 
    string s;

    cout << "Enter an integer: ";
    cin >> i;
    // discard all the remaining data in the buffer 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<< "Enter a double: ";
    cin >> d;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<< "Enter a character: ";
    cin >> c;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter a string: ";
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // display the input
    cout << endl << "You entered: " << endl << i << " " << d << " " << c << " " << s << endl;

    return 0;
}