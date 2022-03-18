//
//  VacationAccount.cpp
//  Project 5
//
//  Created by Arine Kim on 3/3/22.
//

#include "VacationAccount.h"
#include "BloodDonation.h"

/*
 Project Guidelines for VacationAccount Class
    - Each VacationAccount object has an employee ID number associated with the account and its vacation balance.
    - Solely the employee ID number parameter is provided to the VacationAccount constructor.
    - In the beginning of time, the balance should start at zero. In addition to a constructor, each data member has a public accessor operation.
    - The vacation balance gets increased by 4 hours every time the employee donates blood. The increase is done via calls to .addVacationToAccount( ... ).
 */


//Sets EmployeeID to -1 if their ID input is not valid
VacationAccount::VacationAccount():VacationAccount{-1}{
}

VacationAccount::VacationAccount(int EmployeeID) {
    setID(EmployeeID);
}

//Returns Employee ID 
int VacationAccount::getID() {
    return mID;
}

void VacationAccount::setID(int ID) {
    if ((ID >= 100000) && (ID <= 999999)){
        mID = ID;

    }
    else {
        mID = -1;
    }
}

double VacationAccount::getBalance() {
    return mBalance;
}
//update this bool to reflect new parameters (age and gender)
bool VacationAccount::addVacationToAccount(BloodDonation donation) {
    
    if (donation.getAge() == -1 || donation.getWeight() == -1|| donation.getID() == -1) {
        return false;
    }
        else if (VacationAccount::getID() == donation.getID() && donation.getID() != -1){
            mBalance += 4;
            return true;
        } else {
        return false;
    }
    // increase balance
    // return true or false based on checks
}

bool VacationAccount::addVacationToYoungAccount(YoungBloodDonation donation){
    return -1;
}



