#include <iostream>
using namespace std;

int main()
{
    int num,x;
    int arr[10];
    cout << "Enter the number: ";
    cin >> num;
   int n=num;
    for (int i = 0; n != 0; i++)
    {
        arr[i] = n % 2;
        n = n / 2;
        x=i;
    }
cout<< num<<" = ";
    for (int j = 0;j<=x; j++)
    {
        cout <<arr[j] << " ";
    }

    return 0;
}