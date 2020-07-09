#include<cstdio>
#include<iostream>

using namespace std;

int main() {
	unsigned int arr[100004];
	arr[0] = 1;
	arr[1] = 2;
	unsigned int i = 0;
	unsigned int j = 1;
	
	while (i < 100002) {
		arr[i] = j;
		arr[i+1] = j;
		++j;
		i += 2;
	}
	i = 1; j = 0;
	while (i < 100000) {
		arr[i] += arr[i - 1];
		++i;
	}

	unsigned int t;
	cin >> t;
	unsigned int x, y;
	while (t--) {
		cin >> x >> y;
		i = 0;
		while ((y - x) > arr[i]) {
			i++;
		}
		cout << i+1 << endl;
	}

}