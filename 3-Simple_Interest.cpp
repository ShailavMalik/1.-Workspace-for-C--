#include <iostream>
using namespace std;

class bankDeposit {
	int principal;
	int years;
	float interestRate;
	float returnValue;
public:
	bankDeposit() {};
	bankDeposit(int p, int y, float r) {
		principal = p;
		years = y;
		interestRate = r;
		returnValue = (1 + interestRate) * principal*years;
        cout << "Principal amount is "<< principal << ".Return amount is " << returnValue<<endl;
	}
	bankDeposit(int p, int y, int R) {
		principal = p;
		years = y;
		interestRate = float(R)/100;
		returnValue = (1 + interestRate) * principal*years;
        cout << "Principal amount is "<< principal << ".Return amount is " << returnValue<<endl;
	}
	
};

int main() {
	bankDeposit bd1, bd2;
	int p;
	int y;
	float r;
	int R;

	cout << "Enter the value of p,y,r" << endl;
	cin >> p >> y >> r;
	bd1 = bankDeposit(p, y, r);
	
	cout << "Enter the value of p,y,R" << endl;
	cin >> p >> y >> R;
	bd2 = bankDeposit(p, y, R);
	


}