#include "TeamLeader.h"

#include <iostream>

using namespace std;

// Constructors

TeamLeader::TeamLeader() : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {

}

TeamLeader::TeamLeader(string n, int num, string date, int shift, double rate, double bonus, int reqHours, int attHours) : ProductionWorker(n, num, date, shift, rate), monthlyBonus(bonus), requiredTrainingHours(reqHours), attendedTrainingHours(attHours) {

}

// Print

void TeamLeader::printTeamLeader() const {
	printProductionWorker();

	cout << "Monthly Bonus: $" << monthlyBonus << endl;
	cout << "Required Training Hours: " << requiredTrainingHours << endl;
	cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}