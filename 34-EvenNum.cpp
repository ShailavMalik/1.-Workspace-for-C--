// Program to check even or odd using bit manupulation
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    
    // find even or odd
    if (num & 1)
    {
        cout << num << " is odd" << endl;
    }
    else
    {
        cout<<num<<" is even"<<endl;
    }

    return 0;
}