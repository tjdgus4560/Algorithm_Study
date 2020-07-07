#include<iostream>
#include<string>
using namespace std;
int main() {
	int T, rep;
	string S;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> rep >> S;
		for (int j = 0; j < S.size(); ++j) {
			for (int k = 0; k < rep; ++k)
				cout << S[j];
		}
		cout << endl;
	}
}