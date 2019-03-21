#include<iostream>
using namespace std;
#define MAX_SIZE 34

int n, i, j, P[MAX_SIZE][MAX_SIZE];

int main() {
	cin >> n;
	P[0][0] = 1;
	P[1][0] = 1;
	P[1][1] = 1;
	if(n == 1) {
		cout << P[0][0] << endl;
		return 0;
	}
	cout << P[0][0] << endl;
	cout << P[1][0] << " " << P[1][1] <<endl;
	if(n > 2) {
	for(i = 2; i < n; i++) {
		P[i][0] = 1;
		P[i][i] = 1;
		cout << P[i][0] << " ";
		for(j = 1; j < i; j++) {
			P[i][j] = P[i-1][j-1] +P[i-1][j]; 
			cout << P[i][j] << " ";
		}
		cout << P[i][i] << endl;
	}
	}
	return 0;
}