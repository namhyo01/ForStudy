#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int dp[1000002];

int main() {
	int n;
	scanf("%d", &n);
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[10] = 3;
	for (int i = 5; i <= n; i++) {
		if (i % 3 == 0) { //3으로 나누어떨어지면
			dp[i] = dp[i / 3] + 1;
			if (dp[i / 3] > dp[i - 1]) {
				dp[i] = dp[i - 1] + 1;
			}
		}
		else if (i % 2 == 0) {
			dp[i] = dp[i / 2] + 1;
			if (dp[i / 2] > dp[i - 1]) {
				dp[i] = dp[i - 1] + 1;
			}
		}
		else {
			dp[i] = dp[i - 1] + 1;
		}
	}
	printf("%d", dp[n]);
	system("pause");
	return 0;
}*/