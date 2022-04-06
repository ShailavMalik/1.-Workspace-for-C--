// 0 1 1 2 3 5 8 13 21 34 55
#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cout << "Enter the no. of terms to be printed :";
    cin >> n;
    int a = 0, b = 1;
    cout << a << "  " << b << " ";
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << "  ";
    }

    return 0;
}