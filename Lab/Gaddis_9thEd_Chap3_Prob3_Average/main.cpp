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
    float a,b,c,d,e,avrg,total;
    
    //Initialize Variables
    cout << "Input 5 numbers to average." << endl;
    cin >> a >> b >> c >> d >> e;
       
    //Map inputs to outputs -> The Process
            
    //Display Results
    total = a + b + c + d + e;
    avrg = total/5;
    cout << setprecision(1) << fixed;
    cout << "The average = " << avrg;
    
    //Exit stage right
    return 0;
}

