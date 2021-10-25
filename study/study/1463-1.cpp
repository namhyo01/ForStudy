#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include <string.h>
#include<math.h>
#include <stdio.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <unordered_map>
#include <deque>
using namespace std;
/*
int dp[1000002];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int X;
	cin >> X;
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;

	for (int i = 5; i <= X; i++) {
		dp[i] = INT_MAX;
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		dp[i] = min(dp[i], dp[i - 1] + 1);
	}
	cout << dp[X];
	system("pause");
	return 0;

}*/