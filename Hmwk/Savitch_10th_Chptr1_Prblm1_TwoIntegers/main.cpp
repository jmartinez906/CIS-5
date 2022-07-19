/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: C++ Template - To be used in all future assignments
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
    short op1,op2,result1,result2;
    
    //Initialize Variables
    op1=37;
    op2=24;        
    
    //Map inputs to outputs -> The Process
    result1=op1+op2;
    result2=op1*op2;        
    
    //Display Results
    cout<<result1<<" = "<<op1<<" + "<<op2<<endl;
    cout<<result2<<" = "<<op1<<" * "<<op2<<endl;
    //Exit stage right
    return 0;
}

