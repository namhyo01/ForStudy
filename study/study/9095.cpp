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
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	int dp[13];
	while (T--) {
		int n;
		cin >> n;
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		dp[4] = 7;
		for (int i = 5; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[n] << endl;


	}


	system("pause");
	return 0;

}*/