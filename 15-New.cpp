#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;
    int rem, rev = 0;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10; // This is same as num=num/10
    }
    cout << rev << endl;

    return 0;
}