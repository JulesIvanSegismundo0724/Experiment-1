    
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(2);
	double t1, t2, t3, t4, s1, s2, s3, s4;
	cout << "TICKET PRICES     \t   NUMBER OF TICKETS SOLD    \t TOTAL SALES" <<endl;
	cout << "PREMIUM ticket: 250";
	cout <<  "\t Number of tickets sold: ";
	cin >> t1;
	s1 = 250 * t1;
	cout << "Total sales: " << s1 << endl << endl;
	cout << "SIDELINE ticket: 100";
	cout <<  "\t Number of tickets sold: ";
	cin >> t2;
	s2 = 100 * t2;
	cout << "Total sales: " << s2 << endl << endl;
	cout << "BOX ticket: 50";
	cout <<  "\t\t Number of tickets sold:";
	cin >> t3;
	s3 = 50 * t3;
	cout << "Total sales: " << s3 << endl << endl;
	cout << "GEN AD ticket: 25";
	cout <<  "\t Number of tickets sold:";
	cin >> t4;
	s4 = 25 * t4;
	cout << "Total sales: " << s4 << endl << endl;	 

system("pause");
return 0;
}

