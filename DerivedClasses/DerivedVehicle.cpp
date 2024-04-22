/* Name: Derived Classes
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Write a base Vehicle and derived class, i.e., Car, Truck, MotorCycle
 * The Vehicle has number of wheels, number of passengers
 * The derived classes inherit from above and also have:
 *      • a Name, a Make, a Model.
 * Write a Vehicle class
 *      • write a constructor
 *      • write  accessors (getters)
 *      • write  mutators (setters)
 * Write a Car, Truck, MotorCycle class
 *      • write constructors
 *      • write accessors (getters)
 *      • write mutators (setters)
 * Write a main() to test your classes:
 *      • create Vehicle objects
 *      • print values from the Vehicle objects
 */

#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

// Vehicle base class
class Vehicle {
public:
  // constructor
  Vehicle(const int &numWheels, const int &numPassengers)
      : wheels(numWheels), passengers(numPassengers) {}

  // Accessors (getters)
  int getNumberOfWheels() { return wheels; }
  int getNumberOfPassengers() { return passengers; }

  // Mutators (setters)
  void setNumberOfWheels(const int &set_numWheels) { wheels = set_numWheels; }
  void setNumberOfPassengers(const int &set_numPassengers) {
    passengers = set_numPassengers;
  }

  // display
  virtual void print() {
    cout << "This vehicle has " << getNumberOfWheels() << " and can hold "
         << getNumberOfPassengers() << " passengers." << endl;
  }

private:
  int wheels;
  int passengers;
};

class Car : public Vehicle {
public:
  // Constructor
  Car(const int &numWheels, const int &numPassengers, const string &name,
      const string &make, const string &model)
      : Vehicle(numWheels, numPassengers), carName(name), carMake(make),
        carModel(model) {}

  // Accessors
  string getCarName() { return carName; }
  string getCarMake() { return carMake; }
  string getCarModel() { return carModel; }

  // Mutators
  void setCarName(const string &set_cName) { carName = set_cName; }
  void setCarMake(const string &set_cMake) { carMake = set_cMake; }
  void setCarModel(const string &set_cModel) { carModel = set_cModel; }

  // virtual print override
  void print() override {
    cout << "The " << getCarName() << " " << getCarMake() << " "
         << getCarModel() << " has " << getNumberOfWheels()
         << " wheels and can hold " << getNumberOfPassengers() << " passengers."
         << endl;
  }

private:
  string carName;
  string carMake;
  string carModel;
};

int main() {
  // create Vehicle objects
  Car ford(4, 5, "Ford", "Bronco", "XLT");
  // print values from the Vehicle objects
  ford.print();

  // mutators
  ford.setNumberOfPassengers(4);
  ford.setCarMake("F-250");
  ford.print();

  return 0;
}