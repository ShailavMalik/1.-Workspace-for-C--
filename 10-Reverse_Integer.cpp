#include <iostream>
 using namespace std;
 
 int main() 
{
   int num;
   cout<<"Enter the number: ";
   cin>>num;
   int ans=0,digit;
   for(;num!=0;num=num/10)
   {
       digit=num%10;
       ans=ans*10 + digit;
   }
   cout<<ans;
   
    return 0; 
}