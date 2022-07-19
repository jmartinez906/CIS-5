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
    int num,Rnum,Cnum;
    char lett;
    
    //Initialize or input i.e. set variable values
    cin>>num>>lett;
    
    //Map inputs -> outputs
    while (num<1 || num>15){
        cout <<"Input is Invalid, number must be between 1 and 15";
        cin>>num>>lett;
    }
    for (Cnum=1; Cnum<num; Cnum++){
        for (Rnum=1; Rnum<=num; Rnum++)
        {
            cout<<lett;
        }
        cout<<endl;
    }
    for( ; Cnum==num; Cnum++){
        for (Rnum=1; Rnum<=num; Rnum++)
        {
            cout<<lett;
        }
    }
    
    //Exit stage right
    return 0;
}

