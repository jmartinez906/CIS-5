/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: C++ Template - To be used in all future assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PERCENT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;
    float prevcos,currcos,rate,oneyr,twoyr;
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;
        cin>>currcos;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevcos;
        
        rate=((currcos-prevcos)/prevcos)*PERCENT;
        
        cout<<"Inflation rate: "<<rate<<"%"<<endl;
        cout<<endl;
        
        oneyr=(((rate/100)*currcos)+currcos);
        cout<<"Price in one year: $"<<oneyr<<endl;
        
        twoyr=(((rate/100)*oneyr)+oneyr);
        cout<<"Price in two year: $"<<twoyr<<endl;
        cout<<endl;
        
        cout<<"Again:";
        cout<<endl;
        cin>>choice;
        if (choice =='n')break;
    cout<<endl;
    }while (choice =='y' || choice =='Y');
    

    //Exit stage right
    return 0;
}

