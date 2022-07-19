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
    int value;
    int sum = 0;
    
    //Initialize Variables
       
    //Map inputs to outputs -> The Process
    do
    {
        cin >> value;
    
    } while (value < 0);
    
    for(int count = 1; count <= value; count++)
    {
        sum += count;
    }
            
    //Display Results
    cout << "Sum = "<< sum;
    
    //Exit stage right
    return 0;
}

