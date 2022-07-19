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
    float F,
          C;
    
    //Initialize Variables
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" <<endl;
    cin >> F;
       
    //Map inputs to outputs -> The Process
    C = 5 * (F -32) / 9;
            
    //Display Results
    cout << fixed << showpoint << setprecision(1);
    cout << F << " Degrees Fahrenheit = " << C << " Degrees Centigrade";
    
    //Exit stage right
    return 0;
}

