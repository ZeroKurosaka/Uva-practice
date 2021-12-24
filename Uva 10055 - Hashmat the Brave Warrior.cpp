#include<iostream>
#include<cmath>
using namespace std;
int main(void) {
	long long int a, b;
	cin >> a >> b;
	if (a >= b) {
		cout << a - b << endl;
	}
	else if (a < b) {
		cout << b - a << endl;
	}



}