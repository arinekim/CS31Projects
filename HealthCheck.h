//
//  HealthCheck.h
//  Project 5
//
//  Created by Arine Kim on 3/18/22.
//
#include <iostream>
#include <string>
#ifndef HealthCheck_h
#define HealthCheck_h
#include "BloodDonation.h"
#include "YoungBloodDonation.h"

using namespace std;

//Health Check (Sick, Travel outside the US, Low Iron)

class HealthCheck{
    
public:
    HealthCheck(int EmployeeID, string EmployeeHealth, string TravelStatus, string IronStatus);
    int getHealthStatus();
    void setHealthStatus();
    bool EligibilityStatus(BloodDonation donation);
    bool YoungEligibilityStatus(YoungBloodDonation donation);
    
    
private:
    int mID;
    string mHealthStatus;
    string mTravelStatus;
    string mIronStatus;
    
};

#endif /* HealthCheck_h */
