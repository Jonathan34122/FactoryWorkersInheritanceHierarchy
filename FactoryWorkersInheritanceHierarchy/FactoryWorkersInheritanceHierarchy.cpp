// author: Jonathan L.
// Purpose: Demonstrate Constructor chaining.

#include "TeamLeader.h"
#include "ShiftSupervisor.h"

#include <iostream>

using namespace std;

int main(){

    // Assigning a production worker, shift supervisor and a team leader.
    ProductionWorker productionworker("Michael Brown", 54, "1/13/2017", 1, 17.50);
    ShiftSupervisor shiftsupervisor("Zachary Colins", 19, "9/22/2011", 47000, 4000);
    TeamLeader teamleader("Lauren Hill", 8, "9/18/2009", 0, 31.75, 1300, 32, 43);

    productionworker.printProductionWorker();












    
}