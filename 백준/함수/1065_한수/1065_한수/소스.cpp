#include<iostream>
#include<cstdio>

using namespace std;

int Han(int a) {
	if (a < 100) return 1;
	int check = 1;
	int tmp = a%10;
	a /= 10;
	int compare = tmp - a%10;
	tmp = a % 10;
	a /= 10;
	while (a!=0) {
		if (compare != tmp - a % 10)
			check = 0;
		tmp = a % 10;
		a /= 10;
	}
	return check;
}

int main() {
	int res = 0;
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; ++i) {
		res += Han(i);
	}
	printf("%d", res);

}