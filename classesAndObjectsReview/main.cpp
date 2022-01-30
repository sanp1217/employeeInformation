#include "employeePay.h"
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
using namespace std;

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
	//each loop.
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

	if (readFile.is_open()) {
		for (int i = 0; i < 25; i++) {
			readFile >> firstName;
			firstNames.push_back(firstName);

			readFile >> lastName;
			lastNames.push_back(lastName);

			readFile >> ID;
			IDs.push_back(ID);

		}
		readFile.close();
	}

	

	
}