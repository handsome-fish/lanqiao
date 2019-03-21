#include<iostream>
using namespace std;

int year;

int main() {
	cin >> year;
	if(year % 4 == 0) {
		if(year % 100 != 0 || year % 400 == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	else
		cout << "no" << endl;
	return 0;
}