#include <iostream>
 using namespace std;

 class complex{
     int a,b;
     public:
complex()
{
    a=0;
    b=1;
    cout<<"Hello World"<<endl;
}
void print(){
    cout<<a<<" + "<<b<<"i"<<endl;
}
 };
 
 int main() 
{
    complex c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();
    
    return 0; 
}