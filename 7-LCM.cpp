#include <iostream>
using namespace std;
class solution
{
public:
void lcm(int a,int b)
{
for(int i=1;i<=a*b;i++)
{
   if(i%a==0 && i%b==0)
   {
      cout<<"LCM of "<<a<<" & "<<b<<" = "<<i;
      break;
   }
}
}
};

int main()
{
   int num1,num2;
   cout<<"Enter two numbers: ";
   cin>>num1>>num2;
   solution ob;
   ob.lcm(num1,num2);
   
   return 0;
}