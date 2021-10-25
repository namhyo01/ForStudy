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
int house[1001][3];
int dp[1001][3];
int min_price = 99999999;

int min(int a, int b) {
	return a > b ? b : a;
}


int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d %d %d", &house[i][0], &house[i][1], &house[i][2]);
	for (int i = 1; i <= N; i++) {
		dp[i][0] = house[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = house[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = house[i][2] + min(dp[i - 1][1], dp[i - 1][0]);
	}
	int a = min(dp[N][0],dp[N][1]);


	printf("%d", min(a, dp[N][2]));
	system("pause");
	return 0;
}
*/