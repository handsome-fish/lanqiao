#include<iostream>
using namespace std;

int n;

int main() {
	cin >> n;
	for(int i = 10000; i < 1000000; i++) {
		int temp = i;
		int reversal = 0;
		int sum = 0;
		while(temp > 0) { //�������������λ���ܺ�
			reversal = reversal*10 + temp%10;
			sum = sum + temp%10;
			temp = temp/10;
		}
		if(sum == n && reversal == i)
			cout << i <<endl;
	}
	return 0;
}