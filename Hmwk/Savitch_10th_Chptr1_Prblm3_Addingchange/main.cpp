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
    short quarter,dime,nickel,userQuarters,userDimes,userNickels,totQuarters,totDimes,totNickels,total;
    
    //Initialize Variables
    quarter=25;
    dime=10;
    nickel=5;
    userQuarters;
    userDimes;
    userNickels;
    totQuarters;
    totDimes;
    totNickels;
    total;
            
    //Map inputs to outputs -> The Process
    totQuarters = userQuarters*25;
    totDimes = userDimes*10;
    totNickels = userNickels*5;
    total = totQuarters + totDimes + totNickels;
    
    //Display Results
    cout << "Enter number of Quarters ";
    cin >> userQuarters;
        totQuarters=quarter*userQuarters;
        cout << totQuarters << endl;
    cout << "Enter number of Dimes ";
    cin >> userDimes;
        totDimes=dime*userDimes;
        cout << totDimes << endl;
    cout << "Enter number of Nickels ";
    cin >> userNickels;
        totNickels=nickel*userNickels;
        cout << totNickels << endl;
    cout << "Your total is ";
        total = totQuarters + totDimes + totNickels;
        cout << total << endl;        
    //Exit stage right
    return 0;
}

