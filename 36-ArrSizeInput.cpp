// Program to check if size of an array can be set by input from the user
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int arr[n];
    cout << sizeof(arr);

    return 0;
}