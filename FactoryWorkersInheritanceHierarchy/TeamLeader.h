#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker{

private:

	double monthlyBonus;
	int requiredTrainingHours;
	int attendedTrainingHours;

	public:

		// Constructors

		TeamLeader();
		TeamLeader(string n, int num, string date, int shift, double rate, double bonus, int reqHours, int attHours);

		// Print

		void printTeamLeader() const;

};

#endif