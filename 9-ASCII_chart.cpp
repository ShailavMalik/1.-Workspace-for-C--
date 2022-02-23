#include <iostream>
 using namespace std;
 
 int main() 
{
    cout<<"ASCII Value\t"<<"Character"<<endl;
    for(int i=1;i<=200;i++)
    {
        cout<<i<<"\t"<<char(i)<<endl;
    }
 
    return 0; 
}