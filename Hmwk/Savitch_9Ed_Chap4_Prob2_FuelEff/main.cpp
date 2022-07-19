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
     float lit1,gal1,dist1,mpg1,lit2,gal2,dist2,mpg2;
    string choice,ch1,ch2;
    
    //Initialize or input i.e. set variable values
    ch1= "y";
    ch2= "n";
    
    //Map inputs -> outputs
    
    //Display the outputs
    do
    {
        cout << "Car 1"<< endl;
        cout << "Enter number of liters of gasoline:"<<endl;
        cin>>lit1;
        cout <<"Enter number of miles traveled:"<<endl;
        cin>>dist1;
        gal1 = lit1*0.264179;
        mpg1 = dist1/gal1;
        cout <<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<"\n"<<endl;
        
        cout <<"Car 2"<<endl;
        cout <<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2;
        cout <<"Enter number of miles traveled:"<<endl;
        cin>>dist2;
        gal2 = lit2*0.264179;
        mpg2 = dist2/gal2;
        cout <<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<"\n"<<endl;
        
        if (mpg1>mpg2)
            cout <<"Car 1 is more fuel efficient\n"<<endl;
        else
            cout <<"Car 2 is more fuel efficient\n"<<endl;
            cout<<"Again:\n"<<endl;
            cin>>choice;
            while (choice ==ch1)
            {
                cout << "Car 1"<<endl;
                cout <<"Enter number of liters of gasoline:"<<endl;
                cin>>lit1;
                cout <<"Enter number of miles traveled:"<<endl;
                cin>>dist1;
                gal1=lit1*0.264179;
                mpg1=dist1/gal1;
                cout <<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<"\n"<<endl;
                
                cout <<"Car 2"<<endl;
                cout <<"Enter number of liters of gasoline:"<<endl;
                cin>>lit2;
                cout<<"Enter number of miles traveled:"<<endl;
                cin>>dist2;
                gal2=lit2*0.264179;
                mpg2=dist2/gal2;
                cout <<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<"\n"<<endl;
                
                if (mpg1>mpg2)
                    cout <<"Car 1 is more fuel efficient\n"<<endl;
                else
                    cout <<"Car 2 is more fuel efficient\n"<<endl;
                    
                cout <<"Again:"<<endl;
                cin>>choice;
                if (choice==ch2)break;
            }
    }
    while (choice ==ch1);
    //Exit stage right
    return 0;
}

