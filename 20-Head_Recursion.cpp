// Program to print numbers from 1 to n
#include <iostream>
using namespace std;
void counting(int n)
{
    // Base Condition
    if (n == 0)
    {
        return;
    }
    counting(n - 1); // Function call is first statement in function
    cout << n << "\t"; // This is an example of head recursion
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    counting(n);
    return 0;
}