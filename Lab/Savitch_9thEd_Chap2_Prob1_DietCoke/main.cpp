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
    int lbweight,soda;
    
    //Initialize Variables
    cout << "Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout << "Input the desired dieters weight in lbs."<<endl;
    cin >> lbweight;
       
    //Map inputs to outputs -> The Process
    soda = ((lbweight*453.592)* (.14285714285))/.35;
            
    //Display Results
    cout << "The maximum number of soda pop cans" <<endl;
    cout << "which can be consumed is "<<soda<< " cans";
    
    //Exit stage right
    return 0;
}

