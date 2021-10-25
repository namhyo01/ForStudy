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
int arr[100002];
int dp[100002];
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);
	dp[1] = arr[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
	}
	int max_dp = -1000000000;
	for (int i = 1; i <= n; i++) {
		max_dp = max(max_dp, dp[i]);
	}
	printf("%d\n", max_dp);
	system("pause");
	return 0;
}*/