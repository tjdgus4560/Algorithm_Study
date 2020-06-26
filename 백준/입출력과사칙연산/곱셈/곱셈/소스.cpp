#include<stdio.h>
int main() {
	int a, b;
	int temp;
	scanf("%d %d", &a, &b);
	temp = b;
	printf("%d\n", a*(b%10));
	b /= 10;
	printf("%d\n", a*(b % 10));
	b /= 10;
	printf("%d\n", a*(b % 10));
	printf("%d\n", a*temp);
}