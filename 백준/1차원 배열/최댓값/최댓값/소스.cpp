#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int arr[9];
	int M, c = 1;
	cin >> arr[0];
	M = arr[0];
	for (int i = 1; i < 9; ++i) {
		cin >> arr[i];
		M = max(M, arr[i]);
		if (M == arr[i]) {
			c = i+1;
		}
	}
	cout << M << endl << c;
}