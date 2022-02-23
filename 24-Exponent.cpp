// Program to print a^b using recursive function
#include <iostream>
using namespace std;

int exp(int n, int p)
{
    if (p == 0) // Base Condition
    {
        return 1;
    }
    // Subprogram or recursive call
    return n * exp(n, p - 1);
}

int main()
{
    int num, p;
    cout << "Enter the number and exponent: ";
    cin >> num >> p;
    cout << exp(num, p);

    return 0;
}