#include "ShiftSupervisor.h"

#include <iostream>

using namespace std;

// Constructors

ShiftSupervisor::ShiftSupervisor() : Employee(), annualSalary(0.0), annualBonus(0.0) {

}

ShiftSupervisor::ShiftSupervisor(string n, int num, string date, double salary, double bonus) : Employee(n, num, date), annualSalary(salary), annualBonus(bonus) {

}

//  Setters

void ShiftSupervisor::setAnnualSalary(double s) {
	annualSalary = s;
}

void ShiftSupervisor::setAnnualBonus(double b) {
	annualBonus = b;
}

// Getters

double ShiftSupervisor::getAnnualSalary() const {
	return annualSalary;
}

double ShiftSupervisor::getAnnualBonus() const {
	return annualBonus;
}

void ShiftSupervisor::printShiftSupervisor() const {
	printEmployee();

	cout << "Annual Salary: $" << annualSalary << endl;
	cout << "Annual Bonus: $" << annualBonus << endl;
}