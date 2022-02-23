// Program to search a element in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 8, 2, 10, 50, 2, 1};
    cout << "Enter the element to search: ";
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (x == arr[i])
        {
            cout << x << " is at index " << i << " of array" << endl;
            count++;
        }
        else if (i == 5 && count == 0)
        {
            cout << x << " is not present in the arrary" << endl;
        }
    }

    return 0;
}