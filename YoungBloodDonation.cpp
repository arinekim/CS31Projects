//
//  YoungBloodDonation.cpp
//  Project 5
//
//  Created by Arine Kim on 3/18/22.
//

#include "YoungBloodDonation.h"

YoungBloodDonation::YoungBloodDonation():YoungBloodDonation{-1, -1, -1, -1, "Invalid Gender."} {
    
}

YoungBloodDonation::YoungBloodDonation(int EmployeeID, int EmployeeAge, int EmployeeHeight, double EmployeeWeight, string EmployeeGender) {
    setID(EmployeeID);
    setAge(EmployeeAge);
    setHeight(EmployeeHeight);
    setWeight(EmployeeWeight);
    setGender(EmployeeGender);
}

//Returns Employee ID number
int YoungBloodDonation::getID() {
    return mID;
}
//Sets Employee ID to -1 if invalid input
void YoungBloodDonation::setID(int EmployeeID) {
    if ((EmployeeID >= 500000) && (EmployeeID <= 999999)){
        mID = EmployeeID;

    }
    else {
        mID = -1;
    }
}
//Returns Employee Age
int YoungBloodDonation::getAge() {
    return mAge;
}

int YoungBloodDonation::getHeight() {
    return mHeight;
}

void YoungBloodDonation::setHeight(int EmployeeHeight){
    if (EmployeeHeight  && EmployeeHeight <= 280.00){
        mHeight = EmployeeHeight;
    }
    else{
        mWeight = -1;
    }
    
}
//Sets Employee Age to -1 if invalid input
void YoungBloodDonation::setAge(int EmployeeAge) {
    // check and set
    if (EmployeeAge >= 16 && EmployeeAge <= 17){
        mAge = EmployeeAge;
    }
    else{
        mAge = -1;
    }
}
//Returns Employee's Weight
double YoungBloodDonation::getWeight() {
    return mWeight;
}
//Sets Employee Weight to -1 if invalid input
void YoungBloodDonation::setWeight(double EmployeeWeight) {
    if (EmployeeWeight >= 110.00 && EmployeeWeight <= 280.00){
        mWeight = EmployeeWeight;
    }
    else{
        mWeight = -1;
    }
}

string YoungBloodDonation::getGender() {
    return mGender;
}
//Sets Employee Weight to -1 if invalid input
void YoungBloodDonation::setGender(string EmployeeGender) {
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


// if x = 110lbs females must weigh 5* however many inches they are below 5'6" + 110lbs, 66 inch and taller must weigh at least 110, Females 65 in, must weigh at least 115, 64in = 120 lb, 63in = 125, 62 = 130lb, 61 = 135, 60 = 140, 59 = 145, 58 = 150
// males if 58 inches weigh at least 118lbs, 59 at least 114, 60 must weigh 110
bool YoungBloodDonation::YoungEligibilityCheck(){
    if (mID == -1 || mHeight == -1 || mAge == -1 || mWeight == -1 || mGender == "Invalid Gender."){
        return -1;
    }
    if (mGender == "F" && mAge <= 17 && mAge >= 16) {
        if (mHeight == 58 && mWeight < 150.00) {
            return false;
        }
        if(mHeight == 59 && mWeight < 145.00){
            return false;
        }
        if(mHeight == 60 && mWeight < 140.00){
            return false;
        }
        if(mHeight == 61 && mWeight < 135.00){
            return false;
        }
        if(mHeight == 62 && mWeight < 130.00){
            return false;
        }
        if(mHeight == 63 && mWeight < 125.00){
            return false;
        }
        if(mHeight == 64 && mWeight < 120.00){
            return false;
        }
        if(mHeight == 65 && mWeight < 115.00){
            return false;
        }
        if(mHeight == 66 && mWeight < 110.00){
            return false;
        }
    }
    else {
        return 1;
    }
    if(YoungBloodDonation:: getGender() == "M"){
        if (mHeight == 58 && mWeight < 118.00) {
            return false;
        }
        if (mHeight == 59 && mWeight < 114.00) {
            return false;
        }
        if (mHeight == 60 && mWeight < 110.00) {
            return false;
        }
        else {
            return true;
        }
    }
    return 1;
}
