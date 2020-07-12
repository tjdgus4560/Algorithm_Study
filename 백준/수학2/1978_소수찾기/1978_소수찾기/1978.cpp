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
	int time, tmp, res = 0;
	int arr[101];
	cin >> time;
	while (time--) {
		cin >> tmp;
		if (isPrime(tmp))res++;
	}
	cout << res;
}