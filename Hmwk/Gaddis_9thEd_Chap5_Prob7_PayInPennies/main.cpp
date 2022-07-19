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
    int num, days;
    double pay, total;
    
    //Initialize or input i.e. set variable values
    cin >> days;
    num = 1;
    total = 0;
    pay = 0.01;
    
    //Map inputs -> outputs
    while (days<1)
    {
        cout << "Number of days worked must be at leaset 1";
    }
    while (num<=days)
    {
        total=total+pay;
        pay=pay*2;
        num++;
    }
    //Display the outputs
    cout<<"Pay = $"<<fixed<<setprecision(2)<<total;

    return 0;
}

