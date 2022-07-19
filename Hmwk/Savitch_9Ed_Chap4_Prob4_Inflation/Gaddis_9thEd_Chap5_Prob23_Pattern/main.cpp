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
     char wave = '+';
    int num;
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
        for (int i = 1; i <= num; i++){
            for (int j=1; j<=i; j++){
                cout<<"+";
            }
            cout<<endl<<endl;
        }
        for (int i=1; i<=num; i++){
            for (int j =1; j<=num+1-i; j++){
        cout<<"+";}
        if (i < num) cout<< endl<< endl;
        }
    //Exit stage right
    return 0;
}

