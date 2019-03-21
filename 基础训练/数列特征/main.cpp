#include<iostream>
using namespace std;
#define MAX_SIZE 10000

int n, i, data[MAX_SIZE];

int main() {
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> data[i];
	int max = data[0];
	int min = data[0];
	int sum = 0;
	for(i = 0; i < n; i++) {
		max = data[i] > max ? data[i] : max;
		min = data[i] < min ? data[i] : min;
		sum += data[i];
	}
	cout << max << "\n" << min << "\n" << sum << endl; 
	return 0;
}