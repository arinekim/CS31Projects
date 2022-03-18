//
//  BloodDonation.h
//  Project 5
//
//  Created by Arine Kim on 3/3/22.
//
#include <iostream>
#include <string>
#ifndef BloodDonation_h
#define BloodDonation_h
using namespace std;

//things to consider: height, gender, good health (feel sick?), type of donation (?), blood type, medication, low iron, travel outside USA
//Health Check (Sick, Travel outside the US, Low Iron)
//Employee Donation (ID, Age, Weight, Height, Gender) bonus hours if old
//Underaged Employee Donation (ID, Age, Weight, Height, Gender, Parental Consent)
//different weight and height restrictions 
class BloodDonation {
    
    public:
        BloodDonation();
        BloodDonation(int EmployeeID, int EmployeeAge, int EmployeeHeight, double EmployeeWeight, string EmployeeGender); //use donation
        int getID(); 
        void setID(int EmployeeID);
        int getAge();
        void setAge(int EmployeeAge);
        int getHeight();
        void setHeight(int EmployeeHeight);
        double getWeight();
        void setWeight(double EmployeeWeight);
        string getGender();
        void setGender(string EmployeeGender);
    bool EligibilityCheck();
    
    private:
        int mID;
        int mAge;
        double mWeight;
        int mHeight;
        string mGender;
};

#endif /* BloodDonation_h */
