// Program to find factorial of a number
#include <iostream>
using namespace std;
int fact(int n) // n is formal parameter here
{
    // Base Condition
    if (n == 1)
    {
        return 1;
    }

    // Subprogram or recursive call
    return n * fact(n - 1);
}

int main()
{
    int num; 
    cout << "Enter the number: ";
    cin >> num;
    cout <<num<<"! = "<< fact(num); // num is actual parameter here

    return 0;
}