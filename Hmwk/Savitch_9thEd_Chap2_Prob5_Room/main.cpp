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
    int maxCap = 0;
    int numPPL = 0;
    
    //Initialize Variables
    cout << "Input the maximum room capacity and the number of people"<<endl;
    cin >>maxCap>>numPPL;
       
    //Map inputs to outputs -> The Process
            
    //Display Results
    if (numPPL > maxCap) {
        cout << "Meeting cannot be held."<<endl;
        cout << "Reduce number of people by " <<(numPPL - maxCap) <<" to avoid fire violation.";
    }

    else if (numPPL <= maxCap) {
        cout <<"Meeting can be held."<<endl;
        cout <<"Increase number of people by "<<(maxCap - numPPL)<<" will be allowed without violation.";
    }
    
    //Exit stage right
    return 0;
}

