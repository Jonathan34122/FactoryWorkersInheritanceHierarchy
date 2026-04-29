#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee{

private:

	int shift;
	double hourlyPayRate;

public:

	// Default and parameter constructor
	ProductionWorker();
	ProductionWorker(string n, int num, string date, int s, double rate);

	// Getters

	int getShift() const;
	double getHourlyPayRate() const;

	// Setters

	void setShift(int s);
	void setHourlyPayRate(double rate);

	//Print

	void printProductionWorker() const {

	}

};

#endif