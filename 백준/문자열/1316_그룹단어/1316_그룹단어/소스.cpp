#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	int arr[26] = { 0, };
	string s;
	int count=0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < s.size(); ++j) {
			if (arr[s[j] - 97] != 0) break;
			arr[s[j] - 97]++;
			while (s[j] == s[j + 1]) {
				++j;
			}
			if (j == s.size()-1) count++;
		}
		fill_n(arr, 26, 0);
	}
	cout << count;
}