#include "ProductionWorker.h"

#include <iostream>

using namespace std;

// Constructors param and default

ProductionWorker::ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0) {

}

ProductionWorker::ProductionWorker(string n, int num, string date, int s, double rate) : Employee(n, num, date), shift(s), hourlyPayRate(rate){

}

// Getters

int ProductionWorker::getShift() const {
	return shift;
}

double ProductionWorker::getHourlyPayRate() const {
	return hourlyPayRate;
}

// Setters

void ProductionWorker::setShift(int s) {
	shift = s;
}

void ProductionWorker::setHourlyPayRate(double rate) {
	hourlyPayRate = rate;
}

// Print

void ProductionWorker::printProductionWorker() const {
	printEmployee();

	cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
	cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;

}