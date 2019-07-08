#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(2);
	double m, d, v;
	cout << "Enter mass in grams and density in grams per cubic centimeters: " << endl;
	cin >> m >> d;
	v = m / (4 * d);
	cout << "The volume is " << v << " " << "cubic centimeter" << endl;	


system("pause");
return 0;
}
