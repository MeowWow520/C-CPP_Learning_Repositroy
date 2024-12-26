//从键盘输入a和b两个整数，按从大到小的顺序排列
#include <stdio.h>


int main() {
	int a = 0;
	int b = 0;
	printf("Enter first of the two numbers\n");
	scanf("%d", &a);
	printf("Enter second of the two numbers\n");
	scanf("%d", &b);
	if (a < b) {
		printf("%d %d", a, b);
	}
	else {
		printf("%d %d", b, a);
	}
	return 0;
}
