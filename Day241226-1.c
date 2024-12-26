//判断一个年份是不是闰年

#include <stdio.h>


int judge_year(int x) {
	int y = 0;
	int z = 0;
	z = x % 100;
	y = x % 4;
	if (y == 0 && z != 0) {
		return y;
	}
	else {
		return 1;
	}
}


int main() {

	int year = 0;
	printf("Enter A year number\n");
	scanf("%d", &year);
	if (judge_year(year) == 0) {
		printf("Is leap year\n");
	}
	else {
		printf("Isn\'t leap year\n");
	}
	return 0;
}
