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
int K;
long long dp[1001][1001] = { 0, };
int main() {
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		for (int k = 0; k <= N; k++) {
			if (k == 0 || i == k) {
				dp[i][k] = 1;
			}
			else {
				dp[i][k] = (dp[i - 1][k] + dp[i - 1][k - 1])%10007;
			}
		}

	}
	printf("%lld", dp[N][K]);
	system("pause");
	return 0;
}*/