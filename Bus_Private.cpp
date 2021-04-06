#include "Bus_Private.h"
Bus_Private::Bus_Private() : Car("", 0, 0) {}
Bus_Private::Bus_Private(int Number_of_passenger_seats = 0) : Car(Brand, Number_of_cylinders, Power) {}
Bus_Private::Bus_Private(Bus_Private& A) : Car(A.GetBrand(), A.GetNumber_of_cylinders(), A.GetPower()) {}
void Bus_Private::SetNumber_of_passenger_seats(int value)
{
	Number_of_passenger_seats = value;
}
int Bus_Private::GetNumber_of_passenger_seats() const
{
	return Number_of_passenger_seats;
}

ostream& operator << (ostream& out, const Bus_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Bus_Private& A)
{
	string Brand;
	int Number_of_cylinders, Power, Number_of_passenger_seats;
	cout << "Car: " << endl;
	cout << "Brand: "; in >> Brand;
	cout << "Number of cylinders: "; in >> Number_of_cylinders;
	cout << "Power: "; in >> Power;
	cout << "Bus: " << endl;
	cout << "Enter a Number of passenger seats: "; in >> Number_of_passenger_seats;
	A.SetBrand(Brand);
	A.SetNumber_of_cylinders(Number_of_cylinders);
	A.SetPower(Power);
	A.SetNumber_of_passenger_seats(Number_of_passenger_seats);
	return in;
}
Bus_Private::operator string() const
{
	stringstream ss;
	ss << "Car: " << endl;
	ss << "Brand: " << this->GetBrand() << endl;
	ss << "Number of cylinders: " << this->GetNumber_of_cylinders() << endl;
	ss << "Power: " << this->GetPower() << endl;
	ss << "Bus: " << endl;
	ss << "Number of passenger seats: " << this->GetNumber_of_passenger_seats() << endl;
	return ss.str();
}
Bus_Private& Bus_Private::operator ++ ()
{
	this->SetPower(this->GetPower() + 1);
	return *this;
}
Bus_Private& Bus_Private::operator -- ()
{
	this->SetPower(this->GetPower() - 1);
	return *this;
}
Bus_Private Bus_Private::operator ++ (int)
{
	Bus_Private t(*this);
	this->SetPower(this->GetPower() + 1);
	return t;
}
Bus_Private Bus_Private::operator -- (int)
{
	Bus_Private t(*this);
	this->SetPower(this->GetPower() - 1);
	return t;
}
void Bus_Private::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}

void Bus_Private::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}