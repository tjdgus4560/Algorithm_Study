#include<iostream>
#include<string>

using namespace std;

int main() {
	string S;
	cin >> S;
	int count = 0;
	for (int i = 0; i < S.size(); ++i) {
		if (i == S.size() - 1) {
			count++;
			continue;
		}
		if (S[i] == 'c') {
			if (S[i + 1] == '=' || S[i + 1] == '-') {
				count++;
				++i;
				continue;
			}
		}
		if (S[i] == 'd') {
			if (S[i + 1] == 'z' && S[i + 2] == '=') {
				count++;
				i+=2;
				continue;
			}
			if (S[i + 1] == '-') {
				count++;
				++i;
				continue;
			}
		}
		if (S[i] == 'l' && S[i+1]=='j') {
			count++;
			++i;
			continue;
		}
		if (S[i] == 'n' && S[i + 1] == 'j') {
			count++;
			++i;
			continue;
		}
		if ((S[i] == 's' && S[i + 1] == '=' )|| (S[i] == 'z' && S[i + 1] == '=')) {
			count++;
			++i;
			continue;
		}
		count++;
	}
	cout << count;
}