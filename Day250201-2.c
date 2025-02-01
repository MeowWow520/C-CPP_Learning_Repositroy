#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>


int main() {
	int i = 0;
	scanf("%d", &i);
	int x = i / 10000;
	printf("year=%d\n", x);
	int y = (i % 10000) / 100;
	if(y <=10){
		printf("mouth=0%d\n", y);
	}
	else{
		printf("mouth=%d\n", y);
	}
	int z = i % 100;
	if (z <= 10) {
		printf("day=0%d\n", z);
	}
	else {
		printf("day=%d\n", z);
	}
	return 0;
}
