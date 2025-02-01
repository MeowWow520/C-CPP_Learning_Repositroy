#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>


int main() {
	int arr[4] = { 0,0,0,0 };
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &arr[i]);
	}
	int a, b;
	if (arr[0] >= arr[1]) {
		a = arr[0];
	}
	else {
		a = arr[1];
	}
	if (arr[2] >= arr[3]) {
		b = arr[2];
	}
	else {
		b = arr[3];
	}
	if (a >= b) {
		printf("%d\n", a);
	}
	else {
		printf("%d\n", b);

	}
}
