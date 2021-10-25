#include <iostream>
#include <algorithm>

using namespace std;
/*
int X;
int dp[1000002];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> X;
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	int N = X;
	for (int i = 5; i <= X; i++) {
		dp[i] = 99999999999;
		if (i % 3 == 0) {
			dp[i] = min(dp[i],dp[i / 3] + 1);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i],dp[i / 2] + 1);

		}
		dp[i] = min(dp[i - 1] + 1,dp[i]);
	}
	cout << dp[X]<<endl;
	system("pause");
	return 0;
}*/