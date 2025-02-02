#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <math.h>


int FN(int x, int n) {
	int fn = 0;
	for (int i=1; i <= n; i++) {
		fn = fn + pow(i, x);
	}
	return fn;
}
int GN(int k, int n, int b) {
	int gn = k * n + b;
	return gn;
}
int main() {
	int x[4] = { 0,0,0,0 };
	int k[4] = { 0,0,0,0 };
	int n[4] = { 0,0,0,0 };
	int b[4] = { 0,0,0,0 };
	int c[4] = { 0,0,0,0 };
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &k[i]);
	}	
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &n[i]);
	}	
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &b[i]);
	}	
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &c[i]);
	}
	int end[5] = { 0,0,0,0,0 };
	for (int i = 0; i <= x[2]; i++) {
		int gnn = GN(x[1], i, x[3]);
		end[0] = end[0] + FN(x[0], gnn);
	}
	for (int i = 0; i <= k[2]; i++) {
		int gnn = GN(k[1], i, k[3]);
		end[1] = end[1] + FN(k[0], gnn);
	}
	for (int i = 0; i <= n[2]; i++) {
		int gnn = GN(n[1], i, n[3]);
		end[2] = end[2] + FN(n[0], gnn);
	}
	for (int i = 0; i <= b[2]; i++) {
		int gnn = GN(b[1], i, b[3]);
		end[3] = end[3] + FN(b[0], gnn);
	}	
	for (int i = 0; i <= c[2]; i++) {
		int gnn = GN(c[1], i, c[3]);
		end[4] = end[4] + FN(c[0], gnn);
	}
	return 0;
}
