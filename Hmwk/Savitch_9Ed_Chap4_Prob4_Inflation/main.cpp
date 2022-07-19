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
const float PERCENT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;
    float prevcos,currcos;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;
        cin>>currcos;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevcos;
        cout<<"Inflation rate: "<<((currcos-prevcos)/prevcos)*PERCENT<<"%"<<endl;
        cout<<endl;
        cout<<"Again:";
        cout<<endl;
        cin>>choice;
        if(choice=='n')break;
        cout<<endl;
    } while (choice == 'y' || choice == 'Y');
    
    //Display Results
    
    //Exit stage right
    return 0;
}

