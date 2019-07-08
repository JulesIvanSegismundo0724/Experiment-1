#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(3);
	double netBal, payment, d1, d2, aveDB, inter;
	cout << "Enter net balance: " << endl;
	cin >> netBal;
	cout << "Enter payment: " << endl;
	cin >> payment;
	cout << "Enter days in billing cycle: " << endl;
	cin >> d1;
	cout << "Enter days before the billing cycle: " << endl;
	cin >> d2;
	
	aveDB = (netBal * d1 - payment * d2) / d1;
	inter = (aveDB * 0.0097);
	
	cout << "Interest is: " << "P" << inter << endl;

	system("pause");
	return 0;
}
