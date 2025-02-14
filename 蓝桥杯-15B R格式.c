//R 格式：对于一个大于 0 的浮点数 d 可以用 R 格式的整数来表示。给定一个转换参数 n 将浮点数转换为 R 格式整数的做法是:
//
//1、将浮点数乘以 2^n
//2、四舍五入到最接近的整数。
//
//输入格式
//一行输入一个整数 n 和一个浮点数 d 分别表示转换参数，和待转换的浮点数。
//
//输出格式
//输出一行表示答案：
//R 格式表示出来的值。

#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
	float d = 0.0f;
	int n = 0;
	scanf("%d", &n);
	scanf("%f", &d);
	float x = 0.0f;
	x = d * pow(2, n);
	//2 3.14
	//3.14 * 4 = 12.56 -> 13
	//2**(-1) = 0.5
	//2**(-2) = 0.25
	//2**(-3) = 0.125
	int y = 0;
	y = x * 100;//1256
	y = y % 100;//56
	if (y >= 50) {
		int z = x + 1;
		printf("%d\n", z);
	}
	else
	{
		int z = x;
		printf("%d\n", z);

	}
	return 0;
}
