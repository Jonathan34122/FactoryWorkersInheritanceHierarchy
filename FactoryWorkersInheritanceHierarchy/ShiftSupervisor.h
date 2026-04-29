#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee{

private:

	double annualSalary;
	double annualBonus;

public:

	// Constructor default and with parameters

	ShiftSupervisor();
	ShiftSupervisor(string n, int num, string date, double salary, double bonus);

	// Setters

	void setAnnualSalary(double s);
	void setAnnualBonus(double b);

	// Getters

	double getAnnualSalary() const;
	double getAnnualBonus() const;

	// Print

	void printShiftSupervisor() const;

};

#endif