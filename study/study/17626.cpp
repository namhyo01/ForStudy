#include <iostream>
#include <algorithm>
#include <climits>
#include <functional>
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
#include <sstream>
using namespace std;
/*
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int dp[50001] = { 0, };
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= n; i++) {
		dp[i] = INT_MAX;
		for (int j = 1; j*j <= i; j++) {
			dp[i] = min(dp[i],dp[i - j*j] + 1);
		}
	}
	cout << dp[n]<<'\n';
	system("pause");
	return 0;
}*/