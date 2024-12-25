\\  https://www.lanqiao.cn/problems/146/learning/?page_size=10&first_category_id=1&tags=%E7%9C%81%E6%A8%A1%E6%8B%9F%E8%B5%9B&origin=cup
#include <stdio.h>


int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[1000];

	for (int m = 0; m < n; m++) {
		scanf("%d", &arr[m]);
	}

	int i, j, k;
	int out = 0;

	for (int x = 0; x < n - 2; x++) {
		for (int y = 1; y < n - 1; y++) {
			for (int z = 2; z < n; z++) {
				i = arr[x];
				j = arr[y];
				z = arr[z];
				if (i < j && j < z){
					out++;
				}
			}
		}
	}
	printf("%d", out);
	return 0;

}
//有bug
