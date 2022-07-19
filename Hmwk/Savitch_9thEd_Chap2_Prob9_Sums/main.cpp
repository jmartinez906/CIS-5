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
    int num=0,pSum=0,nSum=0,total;
    int count=0,pCount=0,nCount=0;
    
    //Initialize Variables
     cout <<"Input 10 numbers, any order, positive or negative"<<endl;
    for (int i=0; i<10;i++)
    
    {
        cin>>num;
    if (num >-0)
    {
        pSum += num;
        pCount++;
    }
    else
    {
        nSum += num;
        nCount++;
    }
    }
       
    //Map inputs to outputs -> The Process
     total = pSum+nSum;
            
    //Display Results
      cout << fixed;
    cout <<"Negative sum ="<<setw(4)<<nSum<<endl;
    cout <<"Positive sum ="<<setw(4)<<pSum<<endl;
    cout <<"Total sum    ="<<setw(4)<<total;
    
    //Exit stage right
    return 0;
}

