#include "employeePay.h"
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
using namespace std;

//To generate pay rates for each employee.
double assingRandomPayRate() {
	double random = (rand() % 10) * 0.1;
	while (random == 0) {
		random = (rand() % 10) * 0.1;
	}
	return random;
}

int main() {
	//firstName, lastName and ID will be used
	//to get the needed values from the text file.
	//they will be put into vectors one at a time
	//each loop as they are retrieved from the file.
	string firstName;
	string lastName;
	int ID = 0;
	vector<string> firstNames;
	vector<string> lastNames;
	vector<int> IDs;
	vector<employeePay> employees;

	//Opening the file to read from
	fstream readFile;
	readFile.open("employeeNames.txt", ios::in);

	//The first names, last names, and IDs are read 
	//from the file and put into a vector.
	if (readFile.is_open()) {
		for (int i = 0; i < 25; i++) {
			readFile >> firstName;
			firstNames.push_back(firstName);

			readFile >> lastName;
			lastNames.push_back(lastName);

			readFile >> ID;
			IDs.push_back(ID);

			//Employee objects are made with the overloaded 
			//constructor and are put into a vector. Calculated
			//pay is set separately at the end.
			employeePay employee(firstNames[i], lastNames[i], IDs[i], assingRandomPayRate(), 0);
			employees.push_back(employee);
			employees[i].setCalcPay((1 + employees[i].getPayRate()) * employees[i].getBasePay());
		}
		readFile.close();
	}


	//prints out information, spaced evenly.
	cout << setw(15) << left << "First Name" << setw(15) << left << "Last Name" << setw(15) << left << "ID" << setw(15) << left << "Pay Rate" << setw(15) << left << "Calculated Pay"
		"\n*****************************************************************************" << endl;


	for (int i = 8; i < 19; i++) {
		cout << setw(15) << left << firstNames[i] << setw(15) << left << lastNames[i] << setw(15) << left << IDs[i] << setw(15) << left <<
			employees[i].getPayRate() << setw(15) << left << employees[i].getCalcPay() << "\n" << endl;
	}

	
}