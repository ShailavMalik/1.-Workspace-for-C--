// Program to spell a number using recursive function
#include <iostream>
using namespace std;

string str[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

class solution
{
    public:
    void spell(int n)
    {
        if (n == 0)
        {
            return;
        }
        spell(n / 10); // Head Recursion
        int a = n % 10;
        cout << str[a] << " ";
    }
};

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    solution ob;
    ob.spell(num); // Function Call

    return 0;
}