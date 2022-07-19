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
    float a,perc,insur;
    
    //Initialize Variables
    perc=.80;
       
    //Map inputs to outputs -> The Process
            
    //Display Results
    cout <<"Insurance Calculator"<<endl;
    cout <<"How much is your house worth?"<<endl;
    cin >>a;
    insur = a*perc;
    cout <<"You need $"<<insur<<" of insurance.";
    
    //Exit stage right
    return 0;
}

