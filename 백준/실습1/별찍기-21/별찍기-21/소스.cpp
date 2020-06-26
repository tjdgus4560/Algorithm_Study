#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 1; j < a+1; j++) {
			if (j % 2 == 1) {
				cout << "*";
			}
			if (j % 2 == 0) {
				cout << " ";
			}
		}
		cout << endl;
		for (int j = 1; j < a + 1; j++) {
			if (j % 2 == 0) {
				cout << "*";
			}
			if (j % 2 == 1) {
				cout << " ";
			}
		}
		if (i+1 == a)
			break;
		cout << endl;
	}
}