// Bitwise Operators
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;                                   // a=101  b=110
    cout << "a AND b = " << (a & b) << endl;            // 100  (= 4)
    cout << "a OR b = " << (a | b) << endl;             // 111   (=7)
    cout << "NOT a = " << (~a) << endl;                 // 11111....010  (take its 2's complement)
    cout << "a XOR b = " << (a ^ b) << endl;            // 001  (=1)
    cout << "17 rightShift 2 = " << (17 >> 2) << endl; // 0000...10001   ----->   000000....100
    cout<<"17 leftShift 2 = "<< (17<<2)<<endl; // 0000......10001  ------> 00...1000100
    return 0;
}