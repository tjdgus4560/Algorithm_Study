#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	int a, b, t;
	int Max, Min;

	cin >> t;
	cin >> a;
	Max = a;
	Min = a;
	for (int i = 0; i < t-1; ++i) {
		cin >> b;
		Max = max(Max, b);
		Min = min(Min, b);
	}

	cout << Min << " " << Max;

}