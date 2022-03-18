//
//  main.cpp
//  Project 5
//
//  Created by Arine Kim on 3/3/22.
//

#include <iostream>
#include <string>
#include <cassert>
#include "BloodDonation.h"
#include "VacationAccount.h"
using namespace std;

int main()
 {
    /*
     BloodDonation d1(123456, 54, 180);
     BloodDonation d2(900387, 56, 129);
     BloodDonation d3(987, 56, 135);
     BloodDonation d4(800700, 74, 176);
     BloodDonation d5(710712, 34, 96);
     BloodDonation doner1( 752401, 45, 99.56);
     BloodDonation doner2( 889543, 55, 109.50);
     BloodDonation doner3( 89643244, 65, 187.55);
     BloodDonation doner4( 855565, 17, 127.00);

     VacationAccount a1(123456);
     VacationAccount a2(900387);
     VacationAccount a3(987);
     VacationAccount a4(800700);
     VacationAccount a5(710712);
     VacationAccount account(889543);

    switch (43){
case 1:
 assert( d1.getID() == 123456);
            break;
 case 2:
 assert( d1.getAge() == 54);
            break;

 case 3:
 assert( d1.getWeight() == 180.000000);
            break;

 case 4:
 assert( d2.getAge() == 56);
            break;

 case 5:
 assert( d2.getWeight() == 129.000000);
            break;
 case 6:
 assert( d3.getID() == -1);
            break;

 case 7:
 assert( d3.getAge() == 56);
            break;

 case 8:
 assert( d3.getWeight() == 135.000000);
            break;

 case 9:
 assert( d4.getID() == 800700);
            break;

 case 10:
 assert( d4.getAge() == -1);
            break;

 case 11:
 assert( d4.getWeight() == 176.000000);
            break;

 case 12:
 assert( d5.getID() == 710712);
            break;

 case 13:
 assert( d5.getAge() == 34);
            break;

 case 14:
 assert( d5.getWeight() == -1);
            break;

 case 15:
 assert(doner1.getID( ) == 752401);
            break;

 case 16:
 assert(doner1.getAge( ) == 45);
            break;

 case 17:
 assert(doner1.getWeight( ) == -1);
            break;

 case 18:
 assert(doner2.getID( ) == 889543);
            break;
 case 19:
 assert(doner2.getAge( ) == 55);
            break;

 case 20:
 assert(doner2.getWeight( ) == 109.500000);
            break;

 case 21:
 assert(doner3.getID( ) == -1);
            break;

 case 22:
 assert(doner3.getWeight( ) == 187.550000);
            break;

 case 23:
 assert(doner3.getAge() == 65);
            break;

 case 24:
 assert(doner4.getID( ) == 855565);
            break;

 case 25:
 assert(doner4.getWeight( ) == 127.000000);
            break;

 case 26:
 assert(doner4.getAge() == -1);
            break;

 case 27:
 assert(account.getBalance( ) == 0.000000);
            break;

 case 28:
 assert(account.getID( ) == 889543);
            break;

 case 29:
 assert(account.addVacationToAccount(doner2) == true);
 assert(account.getBalance( ) == 4.000000);
            break;

 case 30:
 assert(account.addVacationToAccount(doner1) == false);
            break;

 case 31:
 assert(account.addVacationToAccount(doner2) == true);
 assert(account.getBalance( ) == 4.000000);
 assert(account.getID() == 889543);
 assert(doner2.getID() == 889543);
 assert(doner2.getAge() == 55);
 assert(doner2.getWeight() == 109.500000);
            break;

 case 32:
 assert(a1.getID() == 123456);
            break;

 case 33:
 assert(a1.getBalance() == 0.000000);
            break;

 case 34:
 assert(a1.addVacationToAccount(d1) == true);
            break;

 case 35:
 assert(a2.getID() == 900387);
            break;

 case 36:
 assert(a2.getBalance() == 0.000000);
            break;

 case 37:
 assert(a2.addVacationToAccount(d2) == true);
            break;
 case 38:
 assert(a3.addVacationToAccount(d3) == false);
            break;
 case 39:
 assert(a4.addVacationToAccount(d4) == false);
            break;
 case 40:
 assert(a5.addVacationToAccount(d5) == false);
            break;
 case 41:
 assert(a1.addVacationToAccount(d1) == true);
 assert(a1.getID() == 123456);
 assert(a1.getBalance() == 4.000000);
            break;
 case 42:
 assert(a2.addVacationToAccount(d2) == true);
 assert(a2.getID() == 900387);
 assert(a2.getBalance() == 4.000000);
            break;
 case 43:
 assert(a3.addVacationToAccount(d3) == false);
 assert(a3.getID() == -1);
 assert(a3.getBalance() == 0.000000);
            break;
 case 44:
 assert(a4.addVacationToAccount(d4) == false);
 assert(a4.getID() == 800700);
 assert(a4.getBalance() == 0.000000);
            break;
 case 45:
 assert(a5.addVacationToAccount(d5) == false);
 assert(a5.getID() == 710712);
 assert(a5.getBalance() == 0.000000);
            break;
 case 46:
 assert(a2.getID() == 900387);
 assert(a2.getBalance() == 0.000000);
 assert(a2.addVacationToAccount(d2) == true );
 assert(a2.addVacationToAccount(d2) == true );
 assert(a2.addVacationToAccount(d2) == true );
 assert(a2.addVacationToAccount(d2) == true );
 assert(a2.getBalance() == 16.000000);
            break;
 case 47:
 d4.setAge(47);
 assert(d4.getID() == 800700);
 assert(a4.getID() == 800700);
 assert(d4.getAge() == 47);
            break;
 case 48:
 d4.setAge(47);
 assert(d4.getID() == 800700);
 assert(a4.getID() == 800700);
 assert(d4.getAge() == 47);
 assert(d4.getWeight() == 176.000000);
 assert(a4.addVacationToAccount(d4) == true);
 assert(a4.getBalance() == 4.000000);
            break;
 case 49:
 d5.setWeight(105);
 assert(d5.getAge() == 34);
 assert(d5.getWeight() == 105.000000);
 assert(d5.getID() == 710712);
 assert(a5.getID() == 710712);
 assert(a5.addVacationToAccount(d5) == true);
 assert(a5.getBalance() == 4.000000);
            break;

 case 50:
 d2.setAge(66);
 assert(d2.getAge() == -1);
 assert(a2.getBalance() == 0.000000);
 assert(a2.addVacationToAccount(d2) == false);
 assert(a2.getBalance() == 0.000000);
            break;
    }
     */
    /*
    BloodDonation doner1( 752401, 45, 99.56);
 BloodDonation doner2( 889543, 55, 200.50);
 BloodDonation doner3( 89643244, 65, 187.55);
 BloodDonation doner4( 855565, 17, 127.00);
 BloodDonation doner5( 100000, 21, 280.00);
 BloodDonation doner6( 4738, 23, 92.00);
//Tests all the different donors
 //VacationAccount account(889543);
 //VacationAccount account(752401);
 //VacationAccount account(89643244);
 //VacationAccount account(855565);
 //VacationAccount account(4738);
 VacationAccount account(100000);
 assert(to_string(doner1.getID()) == "752401");
 assert(to_string(doner2.getAge()) == "55" );
 assert(to_string(doner3.getWeight()) == "187.550000");
 assert(to_string(doner5.getID()) == "100000");
 assert(to_string(doner4.getAge()) == "-1" );
 assert(to_string(doner6.getID()) == "-1");
 assert(to_string(doner6.getWeight()) == "-1.000000" );
 assert(to_string(doner3.getID()) == "-1");
// account balance starts at zero...
 //assert( std::to_string(account.getBalance( ) ) == "0.000000" );
    assert(account.getBalance( ) == 0.000000);
 assert( std::to_string(account.getID( )) ==  "100000");
 //assert( std::to_string(account.getID( )) ==  "889543");
// Vacation adds to vacation balance
// assert( account.addVacationToAccount( doner5 ) == true );
 assert( account.addVacationToAccount( doner1 ) == false );
 assert( account.addVacationToAccount( doner6 ) == false );
// assert( std::to_string( account.getBalance( ) ) == "0.000000" );
 assert( std::to_string( account.getBalance( ) ) == "0.000000" );
//Testing that adding to Vacation Account works
 account.addVacationToAccount(doner2);
 account.addVacationToAccount(doner2);
 cout << "This is your account balance" << " " <<to_string(account.getBalance())<< " ";
     */
 return 0;
    
}
