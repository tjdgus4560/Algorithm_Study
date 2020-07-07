#include<iostream>
#include<string>

using namespace std;

int main() {
	string S;
	cin >> S;
	int sum = 0;
	for (int i = 0; i < S.size(); ++i) {
		if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C') {
			sum += 3;
			continue;
		}
		if (S[i] == 'D' || S[i] == 'E' || S[i] == 'F') {
			sum += 4;
			continue;
		}
		if (S[i] == 'G' || S[i] == 'H' || S[i] == 'I') {
			sum += 5;
			continue;
		}
		if (S[i] == 'J' || S[i] == 'K' || S[i] == 'L') {
			sum += 6;
			continue;
		}
		if (S[i] == 'M' || S[i] == 'N' || S[i] == 'O') {
			sum += 7;
			continue;
		}
		if (S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S') {
			sum += 8;
			continue;
		}
		if (S[i] == 'T' || S[i] == 'U' || S[i] == 'V') {
			sum += 9;
			continue;
		}
		if (S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z') {
			sum += 10;
			continue;
		}
	}
	cout << sum;
}