#include<iostream>
using namespace std;
int main() {
	int n, sum = 0, d;
	cout << "Enter the number\n";
	cin >> n;
	for (int i = n; i > 0; i = i / 10) {
		d = i % 10;
		int fact = 1;
		for (int i = 1; i <= d; i++) {
			fact = fact * i;
		}
		sum = sum + fact;
	}
	if (sum == n) {
		cout << "The given number is Strong number";
	}
	else {
		cout << "The given number is not Strong number";
	}
}