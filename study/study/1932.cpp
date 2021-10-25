#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int N;
int triangle[502][502];
int dp[502][502];
int max_num = 0;

int max(int a, int b) {
	return a > b ? a : b;
}

int sum_triangle(int n, int k) {
	//dp[n][k] = max(dp[n-1][k],dp[n-1][k-1])+triangle[n][k]
	if (k <= 0 || n<k)
		return 0;
	if (dp[n][k] != 0)
		return dp[n][k];
	return dp[n][k] = triangle[n][k] + max(sum_triangle(n - 1, k), sum_triangle(n - 1, k - 1));
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= i; j++)
			scanf("%d", &triangle[i][j]);
	dp[1][1] = triangle[1][1];
	for (int i = 1; i <= N+1; i++)
	{
		max_num = max(max_num, sum_triangle(N, i));
	}
	cout << max_num << endl;
	system("pause");
	return 0;
}*/