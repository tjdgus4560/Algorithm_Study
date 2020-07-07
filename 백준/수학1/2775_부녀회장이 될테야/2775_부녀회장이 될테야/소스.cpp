#include<iostream>

using namespace std;

int main() {
	long long int arr[15][14] = { 0, };
	int k, n;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 14; j++) {
			if (i == 0) {
				arr[i][j] = j + 1;
			}
			else if (j == 0) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
			}
		}
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << arr[k][n-1]<< endl;
	}
}