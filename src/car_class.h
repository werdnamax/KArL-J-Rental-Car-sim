/* File: Car_Class.h
   Description: Contains the Car class intended for use with rental car project
   Author: Josh Bielas
   Date: 3/8/2023
*/

#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Car {
private:
  // Private class attributes
  std::vector<bool> availability;
  std::string make;
  std::string model;
  int daysRented = 0;
  double price;
  int firstDayRented;

public:
  // Constructors
  Car() {}
  Car(int index, bool available) {
    availability.resize(availability.size() + 1);
    this->availability.at(index) = available;
  }
  // Methods to get and set availability
  std::vector<bool> getAvailability() { return this->availability; }
  void setAvailability(int index, bool available) {
    availability.resize(availability.size() + 1);
    this->availability.at(index) = available;
  }
  bool getAvailability(int index) { return this->availability.at(index); }
  // Methods to get and set make
  std::string getMake() { return this->make; }
  void setMake(std::string make) { this->make = make; }
  // Methods to get and set model
  std::string getModel() { return this->model; }
  void setModel(std::string model) { this->model = model; }
  // methods to get and set daysRented
  void setDaysRented(int days) { this->daysRented = days; }
  int getDaysRented() { return this->daysRented; }
  // methods to get and set price
  void setPrice(double price) { this->price = price; }
  double getPrice() { return this->price; }
  // methods to get and set first day rented
  void setFirstDayRented(int day) { this->firstDayRented = day; }
  int getFirstDayRented() { return this->firstDayRented; }
};