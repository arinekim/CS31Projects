//
//  YoungBloodDonation.h
//  Project 5
//
//  Created by Arine Kim on 3/18/22.
//

#ifndef YoungBloodDonation_h
#define YoungBloodDonation_h
#include <iostream>
#include <string>

using namespace std;

class YoungBloodDonation {
    
    public:
    
        YoungBloodDonation();
        YoungBloodDonation(int EmployeeID, int EmployeeAge, int EmployeeHeight, double EmployeeWeight, string EmployeeGender); //use donation
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
        bool YoungEligibilityCheck();
    
    private:
        int mID;
        int mAge;
        double mWeight;
        int mHeight;
        string mGender;
};
#endif /* YoungBloodDonation_h */
