#include<iostream>
using namespace std;
int prime[1000001] = {};
int main(void) {
	for (int i = 2; i <= 1000000; i++) {
		if (prime[i] == 0) {
			for (int j = i * 2; j <= 1000000; j = j + i) {
				prime[j] = 1;
			}
		}
	}
	int n , m;
	int det = 0;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		for (int i = 2; i <= n / 2; i++) {
			m = n - i;
			if (prime[m] == 0 && prime[i] == 0) {
				cout << n << " = " << i << " + " << m << endl;
				det = 1;
				break;
			}
			
		}
		if (det == 0) {
			cout << "Goldbach's conjecture is wrong." << endl;
		}
	}




}