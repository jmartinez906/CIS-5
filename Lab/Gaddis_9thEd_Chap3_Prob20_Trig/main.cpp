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
const float pi=3.14159265359;

//Function Prototypes
float cnvrtRd(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float angle,anglesin,anglecos,angletan,s,c,t;
    
    //Initialize Variables
    cout <<"Calculate trig functions"<<endl;
    cout <<"Input the angle in degrees."<<endl;
    cin >>angle;
       
    //Map inputs to outputs -> The Process
    anglesin=pi*angle/180;
    anglecos=pi*angle/180;
    angletan=pi*angle/180;
    s=anglesin;
    c=anglecos;
    t=angletan;
            
    //Display Results
    cout <<"sin(45) = "<<setprecision(4)<<fixed<<setw(1)<<s<<endl;
    cout <<"cos(45) = "<<setprecision(4)<<fixed<<setw(1)<<c<<endl;
    cout <<"tan(45) = "<<setprecision(4)<<fixed<<setw(1)<<t;
    
    //Exit stage right
    return 0;
}

