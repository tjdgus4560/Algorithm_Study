#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[1000];
	int a;
	int M;
	float result=0;
	cin >> a;
	M = 0;

	for (int i = 0; i < a; ++i) {
		cin >> arr[i];
		M = max(M, arr[i]);
	}
	for (int i = 0; i < a; ++i) {
		result += float(arr[i]) / M * 100;
	}
	cout << result / a;


}