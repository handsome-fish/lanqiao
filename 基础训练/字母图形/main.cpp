#include<iostream>
using namespace std;
#include<math.h>

int n, m;

int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << char('A' + abs(j-i));
		}
		cout << endl;
	}
	return 0;
}