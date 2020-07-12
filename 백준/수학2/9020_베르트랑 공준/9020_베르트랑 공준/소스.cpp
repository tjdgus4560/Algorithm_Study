#include<iostream>
#include<cmath>
#include<cstring>


#define MAX_N 100000
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

int upprime(int a) {
	while (!isPrime[a]) {
		a++;
	}
	return a;
}
int lowprime(int a) {
	while (!isPrime[a]) {
		a--;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(false);
	int t,a,b;
	cin >> t;
	eratosthenes();
	while (t--) {
		cin >> n;
		a = b = n / 2;
		if (isPrime[a]) {
			cout << a << ' ' << a << '\n';
			continue;
		}
		a = lowprime(a-1);
		b = upprime(b+1);
		while (a + b != n) {
			if (a + b > n) {
				a = lowprime(a-1);
			}
			else {
				b = upprime(b+1);
			}
		}
		cout << a << ' ' << b << '\n';
	}
	
}