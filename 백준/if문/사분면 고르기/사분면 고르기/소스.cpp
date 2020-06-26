#include<stdio.h>
int main() {
	int x, y;

	scanf("%d %d", &x, &y);
	if (x > 0) {
		if (y > 0) {
			printf("1");
			return 0;
		}
		printf("4");
		return 0;
	}
	if (y > 0) {
		printf("2");
		return 0;
	}
	printf("3");

}