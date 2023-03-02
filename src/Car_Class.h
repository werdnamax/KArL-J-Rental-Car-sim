/*File: Car_Class.h
  Description: Contains the car class. Intended for use with Rental Car Project
  Author: Josh Bielas
  Date: 2/27/2023
*/

#include <iostream>
#include <string>

// Class will be here
class Car {
private:
  // Private class attributes
  bool availability;
  std::string make;
  std::string model;

public:
  // Public class methods to set and get the private class attributes
  Car() {}
  Car(bool available) { this->availability = available; }
  bool getAvailability() { return this->availability; }
  void setAvailability(bool available) { this->availability = available; }
  std::string getMake() { return this->make; }
  void setMake(std::string make) { this->make = make; }
  std::string getModel() { return this->model; }
  void setModel(std::string model) { this->model = model; }
};