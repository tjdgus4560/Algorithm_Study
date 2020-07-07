#include<iostream>

using namespace std;

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;
	int n;
	if (b >= c) {
		cout << -1;
		return 0;
	}
	n = (a / (c - b)) +1;
	cout << n;
}