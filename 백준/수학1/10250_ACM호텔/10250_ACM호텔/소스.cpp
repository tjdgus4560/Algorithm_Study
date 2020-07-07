#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int t;
	int h, w, n;
	cin >> t;
	while (t--) {
		cin >> h >> w >> n;
		cout << ((n % h) == 0 ? h : (n % h)) << setfill('0') << setw(2) << (((n % h) == 0) ? n / h : n / h + 1) << endl;
	}


}