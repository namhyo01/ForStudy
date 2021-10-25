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
int podoju[10002];
long long dp[10002];
int max(int a, int b) {
	return a > b ? a : b;
}
void solve() {
	dp[1] = podoju[1];
	dp[2] = dp[1]+podoju[2];
	//dp[3] = max(dp[1] + podoju[3], podoju[2] + podoju[3]);
	//Á¡È­½Ä dp[n] = dp[n-2]+podoju[n] or dp[n-3] + podoju[n-1]+podoju[n]
	for (int i = 3; i <= N; i++) {
		dp[i] = max(dp[i - 2] + podoju[i], dp[i - 3] + podoju[i - 1] + podoju[i]);
		dp[i] = max(dp[i], dp[i - 1]);
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &podoju[i]);
	solve();
	long long podoju_max = 0;
	cout << dp[N] << endl;
	system("pause");
	return 0;
}*/