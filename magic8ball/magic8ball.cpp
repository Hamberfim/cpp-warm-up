/* Name: Magic 8 Ball
 * Author: Anthony Hamlin
 * Description:
 * A game that prompts for a question and outputs random answer:
 * "Yes", "No", "Maybe", "Ask Again Later"
 */
#include "magic8ball.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <string>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::rand;
using std::srand;
using std::streamsize;
using std::string;
using std::time;

void questionResponse(bool &playAgain) {

  // make this a loop with option to exit
  do {

    for (size_t i = 0; i < 1; i++) {
      /* code */
      cout << "...shaking Magic 8 Ball.." << endl;
      unsigned int microsecond = 1000000;
      usleep(1 * microsecond); // sleeps for 3 second
    }

    // generate random number
    int elapsedSeconds = time(nullptr);

    srand(elapsedSeconds);
    // use random number to choose one of four response
    int result = rand() % 4 + 1;

    cout << "\nMagic 8 Ball Says, " << endl;

    // display the result
    switch (result) {
    case 1:
      cout << "\nAsk Again Later" << endl;
      break;
    case 2:
      cout << "\nMaybe" << endl;
      break;
    case 3:
      cout << "\nNo" << endl;
      break;
    case 4:
      cout << "\nYes" << endl;
      break;
    default:
      cout << "\nERROR" << endl;
      break;
    }

    char again = 'N';
    cout << "\nAsk Another Question? (Y/N): \n" << endl;
    cin >> again;

    if (tolower(again) == 'n') {
      cout << "\nExiting program..." << endl;
      playAgain = false;
      break;
    } else {
      playAgain = true;
      cin.ignore();
    }

  } while (playAgain);
}

int main(void) {
  // does user want to ask again?
  bool playAgain = false;
  // prompt for question
  cout << "Ask Magic 8 Ball Your Question and Press Enter to Continue." << endl;
  cin.ignore();

  questionResponse(playAgain);
}
