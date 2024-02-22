#include <iostream>
#include <string>
using namespace std;

int main() {
  string keyWord;
  unsigned int i;

  // getline(cin, keyWord);

  keyWord = "f CGd";
  string replacementStr;
  for (i = 0; i < keyWord.size(); i++) {
    if (!isalpha(keyWord.at(i))) {
      // keyWord.replace(keyWord.at(i), 1, "x");
      replacementStr += "x";
      // cout << "X" << endl;
    } else {
      replacementStr += keyWord.at(i);
      // cout << keyWord.at(i) << endl;
    }
  }
  keyWord = replacementStr;

  cout << "Adjusted password: " << keyWord << endl;

  return 0;
}