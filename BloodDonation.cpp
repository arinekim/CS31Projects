//
//  BloodDonation.cpp
//  Project 5
//
//  Created by Arine Kim on 3/3/22.
//

#include "BloodDonation.h"

/*
 Project Guidelines for BloodDonation Class
- a valid employee ID number must be a six digits integer number. Each digit must be in the first half of the range of 0 to 9.  A value of -1 will be stored as the employee ID number when the number provided is an invalid number.
- a valid employee’s age must be an integer value ranging from 18 to 65.  The value of -1 will be stored when the age provided is outside of the valid range.
- a valid employee’s weight must be a double value ranging from 110.00 to 280.00.  The value of -1 will be stored when the weight provided is outside of the valid range.
 - valid height is between 58 inches and 82 inches, else -1
 - valid gender is 'F' or 'M' else "Invalid Gender"
 Female: must weigh at least 110 and be at least 58 inches and less than or equal to 82 inches
 Male: must weigh at least 110 and 58 inches and less than 82 inches
*/

//Sets valid inputs to respective member variable and invalid inputs to -1

BloodDonation::BloodDonation():BloodDonation{-1, -1, -1, -1, "Invalid Gender."} {
    
}

BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, int EmployeeHeight, double EmployeeWeight, string EmployeeGender) {
    setID(EmployeeID);
    setAge(EmployeeAge);
    setHeight(EmployeeHeight);
    setWeight(EmployeeWeight);
    setGender(EmployeeGender);
}

//Returns Employee ID number
int BloodDonation::getID() {
    return mID;
}
//Sets Employee ID to -1 if invalid input
void BloodDonation::setID(int EmployeeID) {
    if ((EmployeeID >= 100000) && (EmployeeID <= 499999)){
        mID = EmployeeID;

    }
    else {
        mID = -1;
    }
}
//Returns Employee Age
int BloodDonation::getAge() {
    return mAge;
}

int BloodDonation::getHeight() {
    return mHeight;
}

void BloodDonation::setHeight(int EmployeeHeight){
    if (EmployeeHeight >= 58 && EmployeeHeight <= 82){
        mHeight = EmployeeHeight;
    }
    else{
        mHeight = -1;
    }
    
}
//Sets Employee Age to -1 if invalid input
void BloodDonation::setAge(int EmployeeAge) {
    // check and set
    if (EmployeeAge >= 18 && EmployeeAge <= 65){
        mAge = EmployeeAge;
    }
    else{
        mAge = -1;
    }
}
//Returns Employee's Weight
double BloodDonation::getWeight() {
    return mWeight;
}
//Sets Employee Weight to -1 if invalid input
void BloodDonation::setWeight(double EmployeeWeight) {
    if (EmployeeWeight > 110.00 && EmployeeWeight <= 280.00){
        mWeight = EmployeeWeight;
    }
    else{
        mWeight = -1;
    }
}

string BloodDonation::getGender() {
    return mGender;
}
//Sets Employee Weight to -1 if invalid input
void BloodDonation::setGender(string EmployeeGender) {
    if (EmployeeGender == "F" || EmployeeGender == "M"){
        mGender = EmployeeGender;
    }
    else if (EmployeeGender == "F"){
        mGender = EmployeeGender;
    }
    else {
        mGender = "Invalid Gender.";

    }
}

bool BloodDonation::EligibilityCheck(){
    if (BloodDonation::getID() == -1 || BloodDonation::getHeight() == -1 || BloodDonation:: getAge() == -1 || BloodDonation:: getWeight() == -1 || BloodDonation::getGender() == "Invalid Gender."){
        return -1;
    }
    else {
    return 1;
    }
}
