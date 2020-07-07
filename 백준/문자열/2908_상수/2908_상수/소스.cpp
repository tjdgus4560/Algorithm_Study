#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int aa = stoi(a);
	int bb = stoi(b);

	int big = (aa > bb) ? aa : bb;

	cout << big;
}