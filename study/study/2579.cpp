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
int stairs[302] = { 0, };
int dp[302] = { 0, }; //항상 최대값만
int score = 0; 
int max(int a, int b) {
	return a > b ? a : b;
}

void stair() {
	//점화식
	//dp[n] = dp[n-2]+stairs[n] or dp[n-3]+stairs[n-1]+stairs[n];
	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);

	for (int i = 4; i <= N; i++) {
		dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &stairs[i]);
	stair();
	printf("%d", dp[N]);
	system("pause");
	return 0;
}*/