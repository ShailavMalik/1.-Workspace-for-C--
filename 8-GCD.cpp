#include <iostream>
using namespace std;
class solution
{
public:
    void gcd(int a, int b) //Here a and b are dummy variables
    {
        while (a != b)
        {
            if (a == 0)
            {
                cout << b;
                exit(0);
            }
        
            if (a > b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        cout << a;
    }
};
int main()
{
    int num1, num2;
    cout << "Enter the numbers: ";
    cin >> num1 >> num2;
    solution ob;
    ob.gcd(num1, num2);

    return 0;
}