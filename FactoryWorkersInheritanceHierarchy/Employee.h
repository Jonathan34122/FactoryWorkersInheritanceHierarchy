#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{


private:

	string name;
	int employeeNumber;
	string hireDate;

public:

	// Constructors, default and params

	Employee();
	Employee(string n, int num, string date);

	// Getters

	string getName() const;
	int getEmployeeNumber() const;
	string getHireDate() const;

	// Setters

	void setName(string n);
	void setEmployeeNumber(int num);
	void setHireDate(string date);

	// Print

	void printEmployee() const;

};

#endif