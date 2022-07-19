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
    int max=0,num=0,min=10000000;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    while (num != -99)
    {
        cin >> num;
    if(num==-99)break;
    if(num>max)
        max=num;
    if(num<min)
        min=num;
    }
    
    //Display the outputs
    cout << "Smallest number in the series is " << min <<endl;
    cout << "Largest  number in the series is "<< max;
    //Exit stage right
    return 0;
}

