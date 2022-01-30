#pragma once
# include <string>
# include <cstdlib>
using namespace std;
class employeePay
{
private:
	//first and last name variables along 
	//with ID number, a basepay that will be 
	//15,000 for each employee, the payrate that
	//will be assigned and calculated pay.
	string firstName;
	string lastName;
	int ID;
	const int basePay = 15000;
	double payRate;
	double calcPay;

public:
	//default constructor
	employeePay();

	//overloaded constructor with all variables
	//except basePay as parameters
	employeePay(string firstName, string lastName, int ID, double payRate, double calcPay);
	
	//getters and setters
	int getID();
	void setID(int ID);

	double getPayRate();
	void setPayRate(double payRate);

	double getCalcPay();
	void setCalcPay(double calcPay);

	int getBasePay();


};

