#include "employeePay.h"
# include <cstdlib>
# include <iostream>
# include <string>
# include <vector>
#include <fstream>
using namespace std;

//sets all variables to empty/0.
employeePay::employeePay() {
	this->firstName = " ";
	this->lastName = " ";
	this->ID = 0;
	this->payRate = 0.0;
	this->calcPay = 0.0;
}

//sets variables to values passed into constructor.
employeePay::employeePay(string firstName, string lastName, int ID, double payRate, double calcPay) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->ID = ID;
	this->payRate = payRate;
	this->calcPay = calcPay;
}