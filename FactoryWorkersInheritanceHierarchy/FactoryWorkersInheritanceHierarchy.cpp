// author: Jonathan L.
// Purpose: handle exceptions through a interactive menu system.

#include "TeamLeader.h"
#include "ShiftSupervisor.h"

#include <iostream>
#include <string> // need getline func.

using namespace std;

int main(){

    int choice;

   // Interactive System

    do {

        cout << "Enter Production Worker[1]\n"
            << "Exit [2]\n"
            << "Choice: ";
            cin >> choice;

            if (choice == 1) {
                   string name;
                   string date;
                   int num;
                   int shift;
                   double rate;
                   
                   ProductionWorker productionworker;

                   // NAME

                   cout << "Enter Name: ";

                   cin.ignore(); // reset input buffer.
                   getline(cin, name); // now get name.
                   productionworker.setName(name); // set the name user gave.,

                   // EMPLOYEE NUM

                   while (true) {

                       try {

                           cout << "Enter Employee Number (0-9999): ";
                           cin >> num;
                           productionworker.setEmployeeNumber(num);
                           break;

                       }

                       catch (Employee::InvalidEmployeeNumber) {
                           cout << "Error: Invalid Employee Number! Please re-try.";
                       }

                   }

                   // PAY RATE

                   while (true) {

                       try {

                           cout << "Enter Pay Rate: ";
                           cin >> rate;
                           productionworker.setHourlyPayRate(rate);
                           break;

                       }

                       catch (ProductionWorker::InvalidPayRate) {

                           cout << "Error: Pay Rate Cannot be a negative number! Please re-try";

                       }

                   }

                   cout << "\n------------Employee------------\n"
                       << "Name: "
                       << productionworker.getName()
                       << endl
                       << "ID #: "
                       << productionworker.getEmployeeNumber()
                       << endl
                       << "Shift: "
                       << productionworker.getShift()
                       << endl
                       << "Pay Rate: "
                       << productionworker.getHourlyPayRate()
                       << endl;
            }

    } while (choice != 2);
    
}