#include<iostream>
using namespace std;
#define MAX_SIZE 1000001
#define MOD 10007

int n,F[MAX_SIZE];

int main() {

	cin >> n;
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i <= n; i++) {
		F[i] = (F[i-1] + F[i-2]) % MOD;
	}
	cout << F[n] << endl;
	return 0;
}