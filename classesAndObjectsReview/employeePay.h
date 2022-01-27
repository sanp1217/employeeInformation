#pragma once

class employeePay
{
private:
	//first and last name variables along 
	//with ID number, a basepay that will be 
	//15,000 for each employee and the payrate that
	//will be assigned along with calculated pay.
	string firstName, lastName;
	int ID;
	const int basepay = 15000;
	double payRate;
	double calcPay;

public:
	//default constructor
	employeePay();

	//overloaded constructor with all but basePay and calcPay as parameters
	employeePay(string firstName, string lastName, int ID, double payRate);
	
};

