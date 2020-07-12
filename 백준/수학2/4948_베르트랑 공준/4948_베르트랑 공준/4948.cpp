#include<iostream>
#include<cmath>
#include<cstring>


#define MAX_N 246913
using namespace std;

int n;
bool isPrime[MAX_N + 1];

void eratosthenes() {
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = false;
	int sqrtn = int(sqrt(MAX_N));
	for (int i = 2; i <= sqrtn; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= MAX_N; j += i) {
				isPrime[j] = false;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	int count = 0;
	cin >> n;
	eratosthenes();
	while (n != 0) {
		for (int i = n+1; i <= 2 * n; ++i) {
			if (isPrime[i]) {
				count++;
			}
		}
		cout << count << '\n';
		cin >> n;
		count = 0;
	}
}