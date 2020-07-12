#include<iostream>
#include<cmath>
#include<cstring>


#define MAX_N 1000000
using namespace std;

int n;
bool isPrime[MAX_N + 1];

void eratosthenes() {
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = false;
	int sqrtn = int(sqrt(n));
	for (int i = 2; i <= sqrtn; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= n; j+=i) {
				isPrime[j] = false;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	int a, b,count=0;
	cin >> a >> b;
	n = b;
	eratosthenes();
	for (int i = a; i <= b; ++i) {
		if (isPrime[i]) {
			cout << i << '\n';
		}
	}
}