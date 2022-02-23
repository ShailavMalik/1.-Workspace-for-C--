// Program to print numbers from n to 1
#include <iostream>
using namespace std;

void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << '\t'; // This is an example of tail recursion
    counting(n - 1);  // Function call is the last statement of function
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    counting(n);

    return 0;
}