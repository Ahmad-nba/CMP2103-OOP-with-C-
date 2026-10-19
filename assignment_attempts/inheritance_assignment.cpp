#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
string manufacturer;
string model;
int year;

public:
// Constructor
Vehicle(const string& manufacturer, const string& model, int year)
: manufacturer(manufacturer), model(model), year(year) {}

// Getters
const string& getManufacturer() const {
    return manufacturer;
}

const string& getModel() const {
    return model;
}

int getYear() const {
    return year;
}

// Display general vehicle information
void displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

};

class Car : public Vehicle {
private:
string ccPower;
string fuelType;

public:
// Constructor
Car(const string& ccPower,
const string& fuelType,
const string& manufacturer,
const string& model,
int year)
: Vehicle(manufacturer, model, year),
ccPower(ccPower),
fuelType(fuelType) {}

    
// Getters
const string& getCCPower() const {
    return ccPower;
}

const string& getFuelType() const {
    return fuelType;
}

// Display car-specific and inherited information
void displayInfo() const {
    Vehicle::displayInfo();

    cout << "CC Power: " << ccPower << endl;
    cout << "Fuel Type: " << fuelType << endl;
}


};

int main() {
Car car1("2000cc", "Petrol", "Toyota", "Corolla", 2022);


cout << "CAR INFORMATION" << endl;
cout << "----------------" << endl;

car1.displayInfo();

return 0;


}
