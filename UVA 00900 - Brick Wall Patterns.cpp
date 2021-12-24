#include<iostream>
unsigned long long int fib[51] = { 0 };
using namespace std;
int main(void) {
	fib[0] = fib[1] = 1;
	for (int i = 2; i <= 50; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int num;
	while (cin >> num) {
		if (num == 0) {
			break;
		}
		cout << fib[num] << endl;
	}


}