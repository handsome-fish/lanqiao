#include<iostream>
using namespace std;
#define MAX_SIZE 1000

int n, i, data[MAX_SIZE], num;

int main() {
	cin >> n;
	for(i = 0; i < n; i++) cin >> data[i];
	cin >> num;
	int pos = -1;
	for(i = 0; i < n; i++) {
		if(data[i] == num) {
			pos = i + 1;
			break;
		}
	}
	cout << pos << endl;
	return 0;
}