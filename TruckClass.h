// Truck Class - header file
// Autumn Clark
// Inherits from Vehicle class

#pragma once
#include <string>
#include "VehicleClass.h"

class Truck : public Vehicle {
private:
  bool awd;
  int towing_capacity;
public:
  // Constructors
  Truck(int year, long int miles, int value, std::string manufacture,
    std::string model, float value_date, bool awd, int towing_capacity);
  Truck(); // Default constructor
  // Destructor
  ~Truck();

// Getters
bool GetAWD() const;
int GetTowingCapacity() const;

// Setters
void SetAWD(bool awd);
void SetTowingCapacity(int towing_capacity);

};
