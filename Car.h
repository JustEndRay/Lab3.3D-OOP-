#pragma once
#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class Car
{
public:
	void SetBrand(string Brand);
	void SetNumber_of_cylinders(int  Number_of_cylinders);
	void SetPower(int  Power);

	string GetBrand() const;
	int  GetNumber_of_cylinders() const;
	int  GetPower() const;

	void  Re_assignment_Power();
	void  Change_Power();
	void  Re_assignment_Brand();
	void  Change_Brand();
	Car();
	Car(string, int, int);
	Car(const Car&);
protected:
	string Brand;
	int Number_of_cylinders;
	int  Power;
};

