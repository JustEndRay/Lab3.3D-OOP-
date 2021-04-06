#pragma once
#include "Car.h"
class Bus_Public : public Car
{
private:
	int Number_of_passenger_seats;
public:
	Bus_Public();
	Bus_Public(int);
	Bus_Public(Bus_Public&);

	void SetNumber_of_passenger_seats(int  Power);
	int GetNumber_of_passenger_seats() const;

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();

	friend ostream& operator << (ostream& out, const Bus_Public& A);
	friend istream& operator >> (istream& in, Bus_Public& A);
	operator string() const;

	Bus_Public& operator ++ ();
	Bus_Public& operator -- ();
	Bus_Public operator ++ (int);
	Bus_Public operator -- (int);
};

