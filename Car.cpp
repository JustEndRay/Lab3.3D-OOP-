
#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

void Car::SetBrand(string value) { Brand = value; }
void Car::SetNumber_of_cylinders(int  value) { Number_of_cylinders = value; }
void Car::SetPower(int  value) { Power = value; }

string Car::GetBrand() const { return Brand; }
int  Car::GetNumber_of_cylinders() const { return Number_of_cylinders; }
int  Car::GetPower() const { return Power; }

void Car::Re_assignment_Power()
{
	int n;
	cout << "re-enter power" << endl;
	cin >> n;
	Power = n;
}
void Car::Change_Power()
{
	cout << "change power" << endl;
	cin >> Power;
}
void Car::Re_assignment_Brand()
{
	string n;
	cout << "re-enter brand" << endl;
	cin >> n;
	Brand = n;
}
void Car::Change_Brand()
{
	cout << "change brand" << endl;
	cin >> Brand;
}

Car::Car() { Brand = "", Number_of_cylinders = 0, Power = 0; }
Car::Car(string Brand = " ", int Number_of_cylinders = 0, int Power = 0 )
{
	this->Brand = Brand;
	this->Number_of_cylinders= Number_of_cylinders;
	this->Power = Power;
}
Car::Car(const Car& A)
{
	Brand = A.GetBrand();
	Number_of_cylinders = A.GetNumber_of_cylinders();
	Power = A.GetPower();
}
