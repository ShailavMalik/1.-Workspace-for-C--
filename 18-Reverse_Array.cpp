// Program to reverse an array
#include <iostream>
using namespace std;
// void swap(int *a, int *b) // call by reference using pointer
// {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }
void swap(int &a, int &b) // call by reference using C++ reference variable
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int arr[] = {3, 5, 7, 0, 1, 2};
    cout << "Intially\n";
    for (int i = 0; i < 6; i++) // loop to print array
    {
        cout << arr[i] << '\t';
    }

    int start = 0;
    int end = 5;
    while (start < end) //loop to reverse elements of array
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl
         << endl
         << "Reverse" << endl;
    for (int i = 0; i < 6; i++) // loop to print array after reverse
    {
        cout << arr[i] << '\t';
    }

    return 0;
}