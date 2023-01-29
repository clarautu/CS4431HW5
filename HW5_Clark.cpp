// Homework 5
// Autumn Clark
// Pointers and references

#include <iostream>
#include <string>
#include <vector>
#include "VehicleClass.h"
#include "TruckClass.h"

// Method that takes a const reference to a vector of trucks and a date
  // then ruturns a vector of floats of the trucks estimated values on the passed date
std::vector<float> EstVal(std::vector<Truck> const& trucks, float const& estimate_date){
  std::vector<float> values; // Create a float vector to holds values
  for(int i=0; i<trucks.size(); i++){ // Loop through each truck in trucks
    // Add the estimated value of each truck on the estimate date to values
    values.push_back(trucks.at(i).EstimateValue(estimate_date));
  }
  return values;
}

int main(){
  // Part 1 - Warm up with pointers
  int x,y = 0;
  int* p1 = &x;
  *p1 = 99;
  std::cout << "The value of x: " << x << std::endl;
  std::cout << "The value of p1: " << *p1 << std::endl;
  p1 = &y;
  *p1 = -300;
  std::cout << "The value of y: " << y << std::endl;
  std::cout << "End of part 1\n\n\n";

  // Part 2 testing code
  /*
  Vehicle v1 = Vehicle();
  std::cout << "v1's value: " << v1.GetValue() << std::endl;
  v1.UpdateValue(2020);
  std::cout << "v1's value now: " << v1.GetValue() << std::endl;
  Vehicle v2 = Vehicle();
  std::cout << "v2's value: " << v2.GetValue() << std::endl;
  std::cout << "v2's estimated value: " << v2.EstimateValue(2020) << std::endl;
  */
  Truck t1 = Truck(2015, 0, 37000, "Chevrolet", "Colorado", 2015.182, true, 5000);
  std::cout << "t1's value: " << t1.GetValue() << std::endl;
  t1.UpdateValue(2021.056);
  std::cout << "t1's value now: " << t1.GetValue() << std::endl;

  // Part 3
  std::vector<Truck> trucks; // Create a vector of trucks
  // Add five trucks to the vector
     // Truck general info pulled from cars.com ; towing capacity was Googled and then the rough middle for the range was taken
  trucks.push_back(Truck(2019,19850,39290,"Chevy","Silverado 1500 LT",2021.045,true,8300));
  trucks.push_back(Truck(2017,17647,45998,"Chevy","Silverado 2500 LTZ",2021.045,true,13750));
  trucks.push_back(Truck(2018,33549,46995,"Ford","F-150 Lariat",2021.045,true,6000));
  trucks.push_back(Truck(2018,40052,37960,"Ram","1500 Laramie",2021.045,true,6200));
  trucks.push_back(Truck(2016,98820,47470,"GMC","Sierra 2500 Denali",2021.045,true,13000));

  // Call EstVal on trucks and store value vector in values
  std::vector<float> values = EstVal(trucks, 2024.091);
  for(int i=0; i<values.size(); i++){ // Loop through values and print estimated values
    std::cout << "Truck " << i+1 << " estimated value: " << values.at(i) << std::endl;
  }

  return 0;
}
