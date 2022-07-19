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
    float temp1,temp2,temp3,averNY,averDen,averPho;
    
    //Initialize Variables
    temp1=85;
    temp2=88;
    temp3=106;
       
    //Map inputs to outputs -> The Process
    averNY=(temp1*.02)+temp1;
    averDen=(temp2*.02)+temp2;
    averPho=(temp3*.02)+temp3;
            
    //Display Results
    cout<<"The average temperature for these cities if risen at 2% is: "<<endl;
    cout<<"New York at 85 degrees "<<endl;
    averNY=(temp1*.02)+temp1;
    cout<<averNY<<endl;
    cout<<"Denver at 88 degrees "<<endl;
    averDen=(temp2*.02)+temp2;
    cout<<averDen<<endl;
    cout<<"Phoenix at 106 degrees "<<endl;
    averPho=(temp3*.02)+temp3;
    cout<<averPho<<endl;
    
    //Exit stage right
    return 0;
}

