#include<iostream>

using namespace std;

int main() {
	int arr[10];
	int num[42] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
		arr[i] %= 42;
		num[arr[i]]++;
	}

	for (int i = 0; i < 42; ++i) {
		if (num[i] > 0) {
			count++;
		}
	}
	cout << count;
}