#pragma once
#include "Car.h"
class Bus_Private : private Car
{
private:
	int Number_of_passenger_seats;
public:
	Bus_Private();
	Bus_Private(int);
	Bus_Private(Bus_Private&);

	void SetNumber_of_passenger_seats(int  Power);
	int GetNumber_of_passenger_seats() const;

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();

	friend ostream& operator << (ostream& out, const Bus_Private& A);
	friend istream& operator >> (istream& in, Bus_Private& A);
	operator string() const;

	Bus_Private& operator ++ ();
	Bus_Private& operator -- ();
	Bus_Private operator ++ (int);
	Bus_Private operator -- (int);
};

