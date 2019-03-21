#include<iostream>
using namespace std;
#include<math.h>
#include<iomanip>

int r;
double PI = atan(1.0)*4;

int main() {
	cin >> r;
	cout << r*r*PI <<endl;
	//cout.setf(ios::fixed);
	cout << fixed <<setprecision(7) << r*r*PI <<endl;
	cout.unsetf(ios::fixed);
	cout << r*r*PI <<endl;
	return 0;
}