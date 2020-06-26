#include<stdio.h>
int main() {
	int arr[5];
	int add = 0;
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; ++i) {
		if (arr[i] < 40) {
			arr[i] = 40;
		}
		add += arr[i];
	}
	printf("%d", add / 5);
}