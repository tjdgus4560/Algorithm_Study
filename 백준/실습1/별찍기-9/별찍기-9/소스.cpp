#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (a-i)*2-1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < a; ++i) {
		for (int j = a-i; j > 1; --j) {
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++) {
			cout << "*";
		}
		cout << endl;
	}

}