/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: C++ Template - To be used in all future assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const float payINC = .076;
    const int month = 12;
    float nSalary, rtroPay, aSalary, mSalary;
    
    //Initialize Variables
    cout << "Input previous annual salary."<<endl;
    cin >> aSalary;
       
    //Map inputs to outputs -> The Process
     nSalary = aSalary +aSalary * payINC;
    rtroPay = (nSalary - aSalary)/2;
    mSalary = nSalary/month;
            
    //Display Results
    cout <<fixed <<setprecision(2);
    cout <<"Retroactive pay    = $"<<setw(7)<<rtroPay <<endl;
    cout <<"New annual salary  = $"<<setw(3)<<nSalary <<endl;
    cout <<"New monthly salary = $"<<setw(7)<<mSalary;
    
    //Exit stage right
    return 0;
}

