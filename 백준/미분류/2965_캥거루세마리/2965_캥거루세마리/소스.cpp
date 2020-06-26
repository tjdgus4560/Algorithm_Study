#include<stdio.h>


int main() {
	int a[3] ;
	int front, mid, lear;
	int i, j;
	int temp;
	int count=0;
	for (i = 0; i < 3; ++i) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 2; ++j) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	front = a[0];
	mid = a[1];
	lear = a[2];
	while ((lear - front) != 2) {
		if ((mid - front) <= (lear - mid)) {
			temp = mid;
			mid = lear - 1;
			front = temp;
			count++;
			continue;
		}
		temp = mid;
		mid = front + 1;
		lear = temp;
		count++;
	}

	printf("%d", count);

	return 0;
}