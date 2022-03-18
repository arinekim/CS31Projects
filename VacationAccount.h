//
//  VacationAccount.h
//  Project 5
//
//  Created by Arine Kim on 3/3/22.
//

#ifndef VacationAccount_h
#define VacationAccount_h
#include "BloodDonation.h"
#include "YoungBloodDonation.h"

//Create constructor for VacationAccount
//Public Access contains functions to check vacation balance
//and add to balance if employee donates blood
//Private access initializes the employee ID and vacation balance

class VacationAccount {
    public:
        VacationAccount();
        VacationAccount(int EmployeeID);
        double getBalance();
        int getID();
        void setID(int ID);
        bool addVacationToAccount(BloodDonation donation);
    bool addVacationToYoungAccount(YoungBloodDonation donation);
       // bool bonusHours (BloodDonation donation); <- considering adding bonus hours if I have enough time to and if age is greater than 60
    private:
        int mID;
        double mBalance = 0;
};

#endif /* VacationAccount_h */
