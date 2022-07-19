/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: C++ Template - To be used in all future assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
float const LITER = 0.264172;
float mGALLON(int ml, int lt);

//Function Prototypes
float calc(int,int,const float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    char repeat;
    int lt, ml;

    //Initialize or input i.e. set variable values
    repeat ='y';

    //Map inputs -> outputs
    while (repeat == 'y')
    {
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lt;
        cout<<endl;
        
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>ml;
        cout<<endl;
        
        cout<<fixed<<setprecision(2);
        cout<<"miles per gallon:"<<endl;
        cout<<mGALLON(ml,lt)<<endl;
        
        cout<<"Again:"<<endl;
        cin>>repeat;
        
        if(repeat == 'y')
        
        cout<<endl;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
float mGALLON (int m, int l)
{
    float gallons;
    gallons = LITER*l;
    return(m/gallons);
}

