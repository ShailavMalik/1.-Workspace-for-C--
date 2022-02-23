#include <iostream>
using namespace std;

int main()
{
    int height,weight;
    cout<<"Enter your Height (in cm)"<<endl;
    cin>>height;
    cout<<"Enter your Weight (in Kg)"<<endl;
    cin>>weight;
    float heightInM;
    heightInM=float(height)/100;
    float BMI = float(weight/(heightInM*heightInM));
    cout<<"Your BMI is " <<BMI;
    
    return 0;
}