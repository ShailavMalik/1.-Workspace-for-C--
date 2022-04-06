// convert decimal to binary
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    static int arr[32];
    int count = 0;

    for (int i = 1; num != 0; i++)
    {

        int rem = num % 2;
        arr[i] = rem;
        count++; // This is keep track of upto what value of i we have assinged values to arr
    }

    // loop to print binary number
    for (int i = count; i > 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}