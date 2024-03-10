/* Author: Hamberfim
 * This program simulates the roll of a dice. */
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::time;
using std::srand;
using std::cout;
using std::rand;
using std::endl;

int main(void) {
    // get an int value from time()
    int elapsedSeconds = time(nullptr);

    // seed the number generator
    srand(elapsedSeconds);

    cout << "=== Rolling Dice ===" << endl;

    // fist roll of dice
    int dieRollOne = rand() % 6; // is >= 0 && is < 6
    dieRollOne+=1; // now is >=1 && <=6

    int dieRollTwo = rand() % 6; // is >= 0 && is < 6
    dieRollTwo+=1; // now is >=1 && <=6

    // display
    cout << "Your roll is: " << dieRollOne << " and " << dieRollTwo << endl;
    cout << "Total roll:   " << dieRollOne + dieRollTwo << endl;

    return 0;

}
