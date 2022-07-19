/* 
 * File:   main.cpp
 * Author: Jonathan
 * Created on June 23, 2022, 7:26 PM
 * Purpose: Gas Station Comparison
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
    float tankSize,
          dialPerct,
          fullTank1,
          fullTank2,
          gallons1,
          gallons2,
          full1,
          full2,
          travel1,
          travel2,
          MPG,
          total1,
          total2;
    
    //Initialize Variables
    tankSize=24;
    dialPerct=.50;
    fullTank1;
    full1;
    travel1;
    total1;
    total2;
    MPG=24;
    
    //Map inputs to outputs -> The Process
            
    //Display Results
    cout << "With your gas tank half full, you can go to two different gas station. "<< endl;
    cout <<"Gas Station 1. "<<endl;
    cout <<"Is 1 mile away, and 2 miles round trip at $6.56/gallon. "<<endl;
    cout <<"Your full price to fill up at Gas Station 1 would be. "<<endl;
    fullTank1 = tankSize * dialPerct;
    full1 = fullTank1 * 6.56;
    travel1 = 2/MPG*6.56;
    total1 = full1 + travel1;
    cout <<"Total Cost "<<endl;
    cout <<setprecision(4)<<"$"<<total1<<endl;
    
    cout <<"Gas Station 2. "<<endl;
    cout <<"Is 5 miles away, and 10 miles round trip at $5.68/gallon. "<<endl;
    cout <<"Your price to fill up at Gas Station 2 would be. "<<endl;
    fullTank2 = tankSize * dialPerct;
    full2 = fullTank2 *5.68;
    travel2 = 2/MPG * 5.68;
    total2 = full2 + travel2;
    cout <<"Total Cost "<<endl;
    cout <<setprecision(4)<<"$"<<total2<<endl;
    
    
    //Exit stage right
    return 0;
}

