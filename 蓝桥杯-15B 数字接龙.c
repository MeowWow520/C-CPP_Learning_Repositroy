#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <math.h>
#include <stdbool.h>


//位置判断, i 为 arr[100] 中的下标
// 0:上面 1:底部 2:右侧 3:左侧 4:内部 5~8:左上, 左下，右上，右下角
int weizhi(int i,int n) {
	if (i == 0) { return 5; }
	else if (i == (n * n - n)) { return 6; }
	else if (i == n - 1) { return 7; }
	else if (i == n * n - 1) { return 8; }
	else if (0 <= i && i <= n-1) { return 0; }
	else if ( (n*n-n) <= i && i <= (n * n - 1)) { return 1; }
	else {
		for (int x = 1; x <= n-1; x++) {
			if (x * n - 1 == i) { return 2; }
			else if (x * n == i) { return 3; }
			else { return 4; }
		}
	}
}

int main() {
	int n = 0, k = 0;
	int arr[100] = { 0 };
	for (int i = 0; i <= pow(n, 2); i++) {
		scanf("%d", &arr[i]);
	}

	//第 1 个数可以向 2, 1+n, 位置移动
	//第 2 个数可以向 3, 2+n-1, 2+n, 2+n+1, 位置移动
	//外围的数字,移动的位置有限。内部的没有。
	//外围的格子对应的 arr[100] 中的位置是 |1~n|	 |1, n+1, 2n+1, ..., n(n-1)+1| |n(n-1)+1 ~ n^2| |x*n (1<=x<=n)| |1, n, n^2, n(n-1)+1|
	//						与下标不同!! |上面|   |左侧|                         |底部|			|右侧|			|角落|
	
	return 0;
}
