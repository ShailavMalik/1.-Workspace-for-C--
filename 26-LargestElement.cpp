//Program to find largest element of an array
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 0, 9, 20, 15};
    int max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max=arr[i];
        }
    }

    cout<<"The maximum element of array is "<<max;

    return 0;
}