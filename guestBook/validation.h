#include <iostream>
#include <limits>
#include <string>

using namespace std;

// validate string names
bool isValidName(string name) {
  // check if string is empty
  if (name.length() == 0) {
    return false;
  }

  // check if string contains any numbers
  for (unsigned int i = 0; i < name.length(); i++) {
    if (name[i] >= '0' && name[i] <= '9') {
      return false;
    }
  }

  return true;
}

// validate middle initial
bool isValidInitial(char middleInitial) {
  if (middleInitial == '\0' || middleInitial == '\n') {
    return false;
  }

  if (middleInitial >= '0' && middleInitial <= '9') {
    return false;
  }

  return true;
}

// validate state
bool isValidState(string state) {
  if (state.length() == 0) {
    return false;
  }

  for (unsigned int i = 0; i < state.length(); i++) {
    if (state[i] >= '0' && state[i] <= '9') {
      return false;
    }
  }

  return true;
}

// validate string zip code - 5 character
bool isValidZip(string zipCode) {
  // is the string empty
  if (zipCode.length() == 0) {
    return false;
  }

  // is the string 5 in length
  if (zipCode.length() < 5) {
    return false;
  }

  // is the string to long
  if (zipCode.length() > 5) {
    return false;
  }

  // is the string only numbers
  for (unsigned int i = 0; i < zipCode.length(); i++) {
    if (zipCode[i] >= '0' && zipCode[i] <= '9') {
      return true; // number in the name
    } else {
      return false;
    }
  }
  return true;
}