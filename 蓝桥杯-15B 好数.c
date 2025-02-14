//好数：
//个整数如果按从低位到高位的顺序，奇数位(个位、百位、万位…·)上的数字是奇数，偶数位(十位、千位十万位··)上的数字是偶数，我们就称之为“好数”。
//给定一个正整数 N，请计算从 1 到 N 一共有多少个好数。
#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <math.h>
#include <stdbool.h>


//检查m是不是好数
bool chack(int m) {
	//位数
	int weishu = 1;
	while ( m > 0 ) {
		if (weishu % 2 == 1) {
			//m % 10 % 2 提取最后一位的数字类型 (1是奇数，0是偶数)
			if (m % 10 % 2 != 1)
				return false;
		}
		else {
			if (m % 10 % 2 != 0)
				return false;
		}
		//m /= 10 是“抛弃”最后一位数字;
		m /= 10;
		//增加位数，如果是2就是十分位，同时因为“m /= 10”最后一位恰好是weishu表示的那个分位 
		weishu++;
	}
	return true;
}

int main() {
	int out = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (chack(i)) {
			out++;
		}
	}
	printf("%d\n", out);
	return 0;
}
