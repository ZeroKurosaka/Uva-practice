#include<iostream>
using namespace std;
int prime[1000] = {};
int main(void) {
	for (int i = 2; i <= 1000; i++) {
		if (prime[i] == 0) {
			for (int j = i * 2; j <= 1000; j = j + i) {
				prime[j] = 1;
			}
		}
	}
	int n, c;
	int det[1000] = {};
	while (cin >> n >> c) {
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (prime[i] == 0) {
				det[cnt] = i;
				cnt++;
			}
		}
		c--;
		if (cnt % 2 == 0) {
			cout << n << " " << c + 1 << ": ";
			if(c > cnt) {
				for (int i = 0; i <= cnt - 1; i++) {
					cout << det[i] << " ";
				}
			}
			else {
				for (int i = cnt / 2 - c - 1; i <= cnt / 2 + c; i++) {
					cout << det[i] << " ";
				}
			}
		}
		else if (cnt % 2 == 1) {
			cout << n << " " << c + 1 << ": ";
			if (c > cnt) {
				for (int i = 0; i <= cnt - 1; i++) {
					cout << det[i] << " ";
				}
			}
			else {
				for (int i = cnt / 2 - c; i <= cnt / 2 + c; i++) {
					cout << det[i] << " ";
				}
			}
		}
		cout << endl << endl;
	}



}