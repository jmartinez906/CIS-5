/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: Savitch Freefall
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float Gravity=32;//Acceleration due to Gravity ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int time;
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
       
    //Display Results
    cout <<"Enter Time ";
        cin >> time;
        int distance = time * time * 32/2;
        cout <<"The object has dropped "<< distance << " feet. "<<endl;
    
    //Exit stage right
    return 0;
}

