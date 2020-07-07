#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int alp_arr[26] = { 0, };
	string S;
	cin >> S;
	int max_alp_num = 0;
	int max = 0;
	transform(S.begin(), S.end(), S.begin(), ::tolower);
	for (int i = 0; i < S.size(); ++i) {
		alp_arr[int(S[i])-97] += 1;
	}
	for (int i = 0; i < 26; ++i) {
		if (max < alp_arr[i]) {
			max_alp_num = i;
			max = alp_arr[i];
		}
	}

	for (int i = 0; i < 26; ++i) {
		if (i == max_alp_num) continue;
		if (max == alp_arr[i]) {
			cout << '?';
			return 0;
		}
	}
	cout << char(max_alp_num + 65);


}