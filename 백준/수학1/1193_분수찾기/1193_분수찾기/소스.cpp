#include<iostream>

using namespace std;

int main() {
	int x;
	int n;
	cin >> x;
	for (n = 0; (n*(n + 1))/2 < x; ++n) {}
	int m = (n*(n + 1)) / 2;
	if (n % 2 == 1) {
		cout << (1 + (m - x)) << '/' << (n - (m - x));
	}
	else {
		cout << (n - (m - x)) << '/' << (1 + (m - x));
	}
}