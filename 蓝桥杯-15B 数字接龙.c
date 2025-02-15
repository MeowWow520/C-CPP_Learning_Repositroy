#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <math.h>
#include <stdbool.h>


//位置判断, i 为 arr[100] 中的下标
// 0:上面 1:底部 2:右侧 3:左侧 4:内部 5~8:左上, 左下，右上，右下
int weizhi(int i,int n) {
	if (i == 0) { return 5; }
	else if (i == (n * n - n)) { return 6; }
	else if (i == n - 1) { return 7; }
	else if (i == n * n - 1) { return 8; }
	else if (0 <= i && i <= n-1) { return 0; }
	else if ((n * n - n) <= i && i <= (n * n - 1)) { return 1; }
	else {
		for (int x = 1; x <= n-1; x++) {
			if (x * n - 1 == i) { return 2; }
			else if (x * n == i) { return 3; }
			else { return 4; }
		}
	}
}

//移动到数位判断, i 为 arr[100] 中的下标, z为方向。返回目标位置下标。
// 0:i-n, 1:i-n+1, 2:i+1, 3:i+n+1, 4:i+n, 5:i+n-1, 6:i-1, 7:i-n-1
int yidong(int i, int z, int n) {
	if (i == 0) {//左上
		switch (z) {
		case(2):return i + 1;
		case(3):return i + n + 1;
		case(4):return i + n;
		}
	}
	else if (i == (n * n - n)) {//左下
		switch (z) {
		case(0):return i - n;
		case(1):return i - n + 1;
		case(2):return i + 1;
		}
	}
	else if (i == n - 1) {//右上
		switch (z) {
		case(4):return i + n;
		case(5):return i + n - 1;
		case(6):return i - 1;
		}
	}
	else if (i == n * n - 1) {//右下
		switch (z) {
		case(0):return i - n;
		case(6):return i - 1;
		case(7):return i - n - 1;
		}
	}
	else if (0 <= i && i <= n - 1) {//上面
		switch (z) {
		case(2):return i + 1;
		case(3):return i + n + 1;
		case(4):return i + n;
		case(5):return i + n - 1;
		case(6):return i - 1;
		}
	}
	else if ((n * n - n) <= i && i <= (n * n - 1)) {//底部
		switch (z) {
		case(0):return i - n;
		case(1):return i - n + 1;
		case(2):return i + 1;
		case(6):return i - 1;
		case(7):return i - n - 1;
		}
	}
	else {
		for (int x = 1; x <= n - 1; x++) {
			if (x * n - 1 == i) {//右侧
				switch (z) {
				case(0):return i - n;
				case(4):return i + n;
				case(5):return i + n - 1;
				case(6):return i - 1;
				case(7):return i - n - 1;
				}
			}
			else if (x * n == i) {//左侧
				switch (z) {
				case(0):return i - n;
				case(1):return i - n + 1;
				case(2):return i + 1;
				case(3):return i + n + 1;
				case(4):return i + n;
				}
			}
			else {//内部
				switch (z) {
				case(0):return i - n;
				case(1):return i - n + 1;
				case(2):return i + 1;
				case(3):return i + n + 1;
				case(4):return i + n;
				case(5):return i + n - 1;
				case(6):return i - 1;
				case(7):return i - n - 1;
				}
			}
		}
	}
}


int main() {
	//输入数据
	int n = 0, k = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	int arr[100] = { 0 };
	for (int i = 0; i <= pow(n, 2); i++) {
		scanf("%d", &arr[i]);
	}

	int outarr[100] = { 0 };

	/*
	第 1 个数可以向 2, 1+n, 位置移动
	第 2 个数可以向 3, 2+n-1, 2+n, 2+n+1, 位置移动
	外围的数字,移动的位置有限。内部的没有。
	外围的格子对应的 arr[100] 中的位置是 |1~n|	 |1, n+1, 2n+1, ..., n(n-1)+1| |n(n-1)+1 ~ n^2| |x*n (1<=x<=n)| |1, n(n-1)+1, n, n^2|
							与下标不同!! |上面|   |左侧|                         |底部|			|右侧|			|左上, 左下，右上，右下角|
							可走数字		|23456|  |01234|                        |01267|         |04567|         |234, 012, 456, 670|
	*/

	return 0;
}
