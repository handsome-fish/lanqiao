#include<iostream>
using namespace std;
#include<cmath>

int main() {
	for(int i = 100; i <= 999; i++) {
		int a = i/100;
		int b = i/10%10;
		int c = i%10;
		if(i==pow(a,3)+pow(b,3)+pow(c,3)) cout << i << endl;
	}
	return 0;
}