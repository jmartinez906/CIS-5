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
float max(float num1, float num2);
float max(float num1, float num2, float num3);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,num2,num3;
    
    //Initialize or input i.e. set variable values
    cin>>num1>>num2>>num3;
    
    //Map inputs -> outputs
    cout<<"Enter first number:"<<endl;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cout<<endl;
    
    //Display the outputs
    {
        cout<<"Largest number from two parameter function:"<<endl;
        if(num1 > num2)
        {
            cout<<num1;
            cout<<endl;
        }
        else
        {
            cout<<num2;
            cout<<endl;
        }
    }
    
    {
        cout<<endl;
        cout<<"Largest number from three parameter function:"<<endl;
        if(num1 > num2 and num1 > num3)
        {
            cout<<num1<<endl;
        }
        else if(num2>num1 and num2>num3)
        {
            cout<<num2<<endl;
        }
        else if(num3>num1 and num3>num2)
        {
            cout<<num3<<endl;
        }
    }
    //Exit stage right
    return 0;
}

