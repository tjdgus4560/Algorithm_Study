#include<stdio.h>

int main() {
	int t;
	int result=0;
	scanf("%d", &t);
	for (int i = t; i > 0; --i) {
		result += i;
	}
	printf("%d", result);
}