#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	int sqrtn = int(sqrt(n));
	for (int i = 3; i <= sqrtn; i += 2) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	int a, b, c, res = 0;
	int first=0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			if (!first) {
				first=i;
			}
			res += i;
		}

	}
	if (!first) {
		cout << -1;
		return 0;
	}
	cout << res << endl << first;

}