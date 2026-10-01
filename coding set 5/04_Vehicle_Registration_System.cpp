#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string registrationNumber;
    string companyName;

public:
    Vehicle(string r, string c)
    {
        registrationNumber = r;
        companyName = c;
    }
};

class Car : public Vehicle
{
private:
    string fuelType;
    int engineCapacity;

public:
    Car(string r, string c, string f, int e)
        : Vehicle(r, c)
    {
        fuelType = f;
        engineCapacity = e;
    }

    void display()
    {
        cout << "Car Details" << endl;
        cout << "Registration Number = " << registrationNumber << endl;
        cout << "Company = " << companyName << endl;
        cout << "Fuel Type = " << fuelType << endl;
        cout << "Engine Capacity = " << engineCapacity << " cc" << endl;
        cout << endl;
    }
};

class Bike : public Vehicle
{
private:
    string fuelType;
    int engineCapacity;

public:
    Bike(string r, string c, string f, int e)
        : Vehicle(r, c)
    {
        fuelType = f;
        engineCapacity = e;
    }

    void display()
    {
        cout << "Bike Details" << endl;
        cout << "Registration Number = " << registrationNumber << endl;
        cout << "Company = " << companyName << endl;
        cout << "Fuel Type = " << fuelType << endl;
        cout << "Engine Capacity = " << engineCapacity << " cc" << endl;
        cout << endl;
    }
};

int main()
{
    Car c1("JK02AB1234", "Toyota", "Petrol", 1500);
    Car c2("JK02CD5678", "Honda", "Petrol", 1200);

    Bike b1("JK02EF1111", "Honda", "Petrol", 150);
    Bike b2("JK02GH2222", "Bajaj", "Petrol", 125);

    c1.display();
    c2.display();

    b1.display();
    b2.display();

    return 0;
}

