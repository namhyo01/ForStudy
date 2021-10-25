#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int n;
int A[1002];
int dp[1002];
int main() {

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = max(sum, dp[i]);
	
	printf("%d\n", sum);
	system("pause");
	return 0;
}*/