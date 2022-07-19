/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float land,tract;
    //Initialize Variables
            
    //Map inputs to outputs -> The Process
    tract=391876;
            
    //Display Results
    cout<<"The amount of acres in a tract of land with 391,876 square feet is"<<endl;
    land=tract / 43560;
    cout<<land<<" = "<<tract<<" / "<<43560<<endl;
    
    //Exit stage right
    return 0;
}

