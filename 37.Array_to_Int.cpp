// Program to convert an array to a single integer
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 8};
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        num = num * 10 + arr[i];
    }
    cout << num;
    
    return 0;
}