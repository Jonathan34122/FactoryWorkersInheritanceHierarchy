#include "Employee.h"

//Constructors
//Default

Employee::Employee() : name(" "), employeeNumber(0), hireDate(" ") {

}

// Parameter constructor

Employee::Employee(string n, int num, string date) : name(n), employeeNumber(num), hireDate(date) {

}

// Getters

string Employee::getName() const {
	return name;
}

int Employee::getEmployeeNumber() const {
	return employeeNumber;
}

string Employee::getHireDate() const {
	return hireDate;
}

// Setters

void Employee::setName(string n) {
	name = n;
}

void Employee::setEmployeeNumber(int num) {
	employeeNumber = num;
}

void Employee::setHireDate(string date) {
	hireDate = date;
}

void Employee::printEmployee() const {
	cout << "Name: " << name << endl;
	cout << "Employee Number: " << employeeNumber << endl;
	cout << "Hire Date: " << hireDate << endl;
}