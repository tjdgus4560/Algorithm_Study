//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int v, a, b;
//	cin >> a >> b >> v;
//	if (a == v) {
//		cout << '1';
//		return 0;
//	}
//	int x;
//	while (1) {
//		cin >> a >> b >> v;
//		if (((v - a) / (a - b) + a) == v) {
//			printf("%d\n", (v - a) / (a - b));
//		}
//	}
//
//	if ((v - a) % (a - b) == 0 && ((v - a) / (a - b) + a ) == v) {
//		x = (v - a) / (a - b) + 1;
//		cout << x;
//	}
//	else {
//		x = (v - a) / (a - b);
//		cout << x+2;
//	}
//	
//}
//

#include<stdio.h>


int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int x = (v - a) / (a - b);
	int h = x * (a - b) + a;
	if (h == v) {
		printf("%d", x + 1);
	}
	else {
		printf("%d", x + 2);
	}
}
