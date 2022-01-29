#include "employeePay.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
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

	//Opening the file to read from
	fstream readFile;
	readFile.open("employeeNames.txt", ios::in);











}