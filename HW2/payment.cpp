//
//  payment.cpp
//  HW2
//
//  Created by Arine Kim on 1/19/22.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

//Creates variables needed for project
    string stateName, month, error = "";
    int day,year;
    double purchaseAmt, AmtOwed, stateSalesTaxAmt, avgLocalTaxRateAmt, LevyAmt;
    double stateTaxRate = 0, Levy = 0, avgLocalTaxRate = 0;

// Asks user to input data needed to calculate total amount owed
    
    cout<< "State Name: ";
    getline(cin,stateName); /*Uses getline for strings*/
    cout<< "Purchase amount: ";
    cin>> purchaseAmt;
    cin.ignore(256, '\n'); /*Uses cin.ignore to clear inputs to effectively use getline*/
    cout<< "Provide the month: ";
    getline(cin,month);
    cout<< "Provide the day: ";
    cin>> day;
    cout<< "Provide the year: ";
    cin>> year;

//Reinititializes String Variable "error" in case there are invalid inputs

//Accounts for Invalid Year Inputs
    if (year < 1 || year > 2025)
        {
            error = "Invalid year!";
        }
//Accounts for Invalid Day Inputs

    if (day < 1 || day > 31)
        {
            error = "Invalid day!";
        }
//Accounts for Invalid Month Inputs

    if (month == "January" || month == "February" || month == "March" || month == "April" ||
        month == "May" || month == "June" || month == "July" || month == "August" ||
        month == "September" || month == "October" || month == "November" || month == "December")
        {
            
        }
        else
            {
                error = "Invalid month!";
            }
//Accounts for Invalid Purchase Amount Inputs

    if (purchaseAmt <= 0)
        {
            error = "Invalid amount!";
        }
//Accounts for Invalid State Name Inputs

    if (stateName == "Alabama" || stateName == "Alaska" || stateName == "Arizona" || stateName == "Arkansas" || stateName == "California" || stateName == "Colorado" || stateName == "Connecticut" || stateName == "Delaware" || stateName == "Florida" || stateName == "Georgia" || stateName == "Hawaii" || stateName == "Idaho" || stateName == "Illinois" || stateName == "Indiana" || stateName == "Iowa" || stateName == "Kansas" || stateName == "Kentucky" || stateName == "Louisiana" || stateName == "Maine" || stateName == "Maryland" || stateName == "Massachusetts" || stateName == "Michigan" || stateName == "Minnesota" || stateName == "Mississippi" || stateName == "Missouri" || stateName == "Montana" || stateName == "Nebraska" || stateName == "Nevada" || stateName == "New Hampshire" || stateName == "New Jersey" || stateName == "New Mexico" || stateName == "New York" || stateName == "North Carolina" || stateName == "North Dakota" || stateName == "Ohio" || stateName == "Oklahoma" || stateName == "Oregon" || stateName == "Pennsylvania" || stateName == "Rhode Island" || stateName == "South Carolina" || stateName == "South Dakota" || stateName == "Tennessee" || stateName == "Texas" || stateName == "Utah" || stateName == "Vermont" || stateName == "Virginia" || stateName == "Washington" || stateName == "West Virginia" || stateName == "Wisconsin" || stateName == "Wyoming")
         {
            
         }
        else
            {
                error = "Invalid state!";
            }
//Reduce Redundancy by Initializing Variable Levy as 0 for applicable states

    if (stateName != "California" || stateName != "Virginia" || stateName != "Utah")
        {
            Levy = 0;
        }
// Reduce Redundancy by Inititalizing Variable avgLocalTaxRate as 0 for applicable states

    if (stateName == "Connecticut"|| stateName == "Delaware"|| stateName == "Indiana" || stateName == "Kentucky" || stateName == "Maine" || stateName == "Maryland"|| stateName == "Massachusetts" || stateName == "Michigan" || stateName == "Montana" || stateName == "New Hampshire" || stateName == "Oregon" || stateName == "Rhode Island")
        {
            avgLocalTaxRate = 0;
        }
    
//Reinitializes all sales tax variables + Purchase Amount for all 50 States

//Accounts for Alabama Tax Free Dates
    
    if (stateName == "Alabama" && month == "July" && day >= 15 && day <= 17)
        {
            AmtOwed = purchaseAmt;
        }
        else if (stateName == "Alabama")
            {
                stateTaxRate = 0.04;
                avgLocalTaxRate = 0.0514;
            }
    if (stateName == "Alaska")
        {
            stateTaxRate = 0;
            avgLocalTaxRate = 0.0143;
        }
    if (stateName == "Arizona")
        {
           stateTaxRate = 0.056;
           avgLocalTaxRate = 0.0277;
        }
//Accounts for Arkansas Tax Free Dates nd non-Tax Free Dates
    
    if (stateName == "Arkansas" && month == "August" && day >= 6 && day <= 7)
        {
            AmtOwed = purchaseAmt;
        }
        else if (stateName == "Arkansas")
            {
                stateTaxRate = 0.065;
                avgLocalTaxRate = 0.0293;
            }
    if (stateName == "California")
        {
           stateTaxRate = 0.0725;
           avgLocalTaxRate = 0.0131;
           Levy = 0.01;
        }
    if (stateName == "Colorado")
        {
           stateTaxRate = 0.029;
           avgLocalTaxRate = 0.0473;
        }
//Accounts for Connecticut Tax Free Dates and non-Tax Free Dates
    
    if (stateName == "Connecticut" && month == "August" && day >= 21 && day <= 27)
        {
        AmtOwed = purchaseAmt;
        }
    else if (stateName == "Connecticut")
        {
            stateTaxRate = 0.0635;
        }
    if (stateName == "Delaware")
        {
           stateTaxRate = 0;
        }
    if (stateName == "Florida")
        {
           stateTaxRate = 0.06;
           avgLocalTaxRate = 0.0105;
        }
    if (stateName == "Georgia")
        {
           stateTaxRate = 0.04;
           avgLocalTaxRate = 0.0329;
        }
    if (stateName == "Hawaii")
        {
           stateTaxRate = 0.04;
           avgLocalTaxRate = 0.0041;
        }
    if (stateName == "Idaho")
        {
           stateTaxRate = 0.06;
           avgLocalTaxRate = 0.003;
        }
    if (stateName == "Illinois")
        {
           stateTaxRate = 0.0625;
           avgLocalTaxRate = 0.0249;
        }
    if (stateName == "Indiana")
        {
            stateTaxRate = 0.07;
        }
//Accounts for Iowa Tax Free Dates and non-Tax Free Dates
    if (stateName == "Iowa" && month == "August" && day >= 5 && day <= 6)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Iowa")
        {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0082;
        }
    if (stateName == "Kansas")
        {
            stateTaxRate = 0.065;
            avgLocalTaxRate = 0.0217;
        }
    if (stateName == "Kentucky")
        {
            stateTaxRate = 0.06;
        }
    if (stateName == "Louisiana")
        {
            stateTaxRate = 0.0445;
            avgLocalTaxRate = 0.05;
        }
    if (stateName == "Maine")
        {
            stateTaxRate = 0.055;
        }
//Accounts for Maryland Tax Free Dates and non-Tax Free Dates
    if (stateName == "Maryland" && month == "August" && day >= 14 && day <= 20)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Maryland")
        {
            stateTaxRate = 0.06;
        }
//Accounts for Massachusetts Tax Free Dates and non-Tax Free Dates
    if (stateName == "Massachusetts" && month == "August" && day >= 14 && day <= 15)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Massachusetts")
        {
            stateTaxRate = 0.0625;
        }
    if (stateName == "Michigan")
        {
            stateTaxRate = 0.06;
        }
    if (stateName == "Minnesota")
        {
            stateTaxRate = 0.0688;
            avgLocalTaxRate = 0.0055;
        }
//Accounts for Mississippi Tax Free Dates and non-Tax Free Dates
    if (stateName == "Mississippi" && month == "July" && day >= 29 && day <= 30)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Mississippi")
        {
            stateTaxRate = 0.07;
            avgLocalTaxRate = 0.007;
        }
//Accounts for Missouri Tax Free Dates and non-Tax Free Dates
    if (stateName == "Missouri" && month == "April" && day >= 19 && day <= 25)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Missouri")
        {
            stateTaxRate = 0.0423;
            avgLocalTaxRate = 0.039;
        }
    if (stateName == "Montana")
       {
           stateTaxRate = 0;
       }
    if (stateName == "Nebraska")
        {
            stateTaxRate = 0.055;
            avgLocalTaxRate = 0.0135;
        }
//Accounts for Nevada Tax Free Dates and non-Tax Free Dates
    if (stateName == "Nevada" && month == "August" && day >= 5 && day <= 7)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Nevada")
        {
            stateTaxRate = 0.0685;
            avgLocalTaxRate = 0.0129;
        }
    if (stateName == "New Hampshire")
        {
            stateTaxRate = 0;
        }
    if (stateName == "New Jersey")
        {
            stateTaxRate = 0.0663;
            avgLocalTaxRate = -0.003;
        }
    if (stateName == "New Mexico")
        {
            stateTaxRate = 0.0513;
            avgLocalTaxRate = 0.0269;
        }
    if (stateName == "New York")
        {
            stateTaxRate = 0.04;
            avgLocalTaxRate = 0.0449;
        }
    if (stateName == "North Carolina")
        {
            stateTaxRate = 0.0475;
            avgLocalTaxRate = 0.0222;
        }
    if (stateName == "North Dakota")
        {
            stateTaxRate = 0.05;
            avgLocalTaxRate = 0.0185;
        }
//Accounts for Ohio Tax Free Dates and non-Tax Free Dates
    if (stateName == "Ohio" && month == "August" && day >= 5 && day <= 7)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Ohio")
        {
            stateTaxRate = 0.0575;
            avgLocalTaxRate = 0.0142;
        }
//Accounts for Oklahoma Tax Free Dates and non-Tax Free Dates
    if (stateName == "Oklahoma" && month == "August" && day >= 6 && day <= 8)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Oklahoma")
        {
            stateTaxRate = 0.045;
            avgLocalTaxRate = 0.0442;
        }
    if (stateName == "Oregon")
        {
            stateTaxRate = 0;
        }
    if (stateName == "Pennsylvania")
        {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0034;
        }
    if (stateName == "Rhode Island")
        {
            stateTaxRate = 0.07;
        }
//Accounts for South Carolina Tax Free Dates and non-Tax Free Dates
    if (stateName == "South Carolina" && month == "August" && day >= 5 && day <= 7)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "South Carolina")
        {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0143;
        }
    if (stateName == "South Dakota")
        {
            stateTaxRate = 0.045;
            avgLocalTaxRate = 0.019;
        }
//Accounts for Tennessee Tax Free Dates and non-Tax Free Dates
    if (stateName == "Tennessee" && month == "July" && day >= 29 && day <= 31)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Tennessee")
        {
            stateTaxRate = 0.07;
            avgLocalTaxRate = 0.0247;
        }
//Accounts for Texas Tax Free Dates and non-Tax Free Dates
    if (stateName == "Texas" && month == "August" && day >= 5 && day <= 7)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "Texas")
        {
            stateTaxRate = 0.0625;
            avgLocalTaxRate = 0.0194;
        }
    if (stateName == "Utah")
        {
            stateTaxRate = 0.0595;
            avgLocalTaxRate = 0.0099;
            Levy = 0.0125;
        }
    if (stateName == "Vermont")
        {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0018;
        }
    if (stateName == "Virginia")
        {
            stateTaxRate = 0.053;
            avgLocalTaxRate = 0.0035;
            Levy = 0.01;
        }
    if (stateName == "Washington")
        {
            stateTaxRate = 0.065;
            avgLocalTaxRate = 0.0267;
        }
//Accounts for Alabama Tax Free Dates and non-Tax Free Dates
    if (stateName == "West Virginia" && month == "August" && day >= 5 && day <= 7)
    {
        AmtOwed = purchaseAmt;
    }
    else if (stateName == "West Virginia")
        {
            stateTaxRate = 0.06;
            avgLocalTaxRate = 0.0039;
        }
    if (stateName == "Wisconsin")
        {
            stateTaxRate = 0.05;
            avgLocalTaxRate = 0.0044;
        }
    if (stateName == "Wyoming")
        {
            stateTaxRate = 0.04;
            avgLocalTaxRate = 0.0136;
        }
    
//Calculates Total Sales Tax and Total Amount Owed
    
    stateSalesTaxAmt = purchaseAmt * stateTaxRate;
    avgLocalTaxRateAmt = purchaseAmt * avgLocalTaxRate;
    LevyAmt = Levy * purchaseAmt;
    AmtOwed = LevyAmt + stateSalesTaxAmt + avgLocalTaxRateAmt + purchaseAmt;

//Shows error if inputs are invalid
    
    if (error == "")
        {
            cout<<"Please pay a total of: $"<< setprecision(2)<< fixed<< AmtOwed<<endl;
        }
        else
            {
                cout<<error<<endl;
            }
    return 0;
}
