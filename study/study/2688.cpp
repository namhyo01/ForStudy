//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//long long dp[65][10];
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	for (int i = 0; i <= 9; i++) dp[1][i] = 1;
//
//	for (int i = 2; i < 65; i++) {
//		for (int j = 0; j <= 9; j++) {
//			for (int k = j; k <= 9; k++) {
//				dp[i][j] += dp[i - 1][k];
//			}
//		}
//	}
//
//	while (T--) {
//		int n;
//		cin >> n;
//		long long result = 0;
//		for (int i = 0; i < 10; i++) {
//			result += dp[n][i];
//		}
//		cout << result << endl;
//
//	}
//	system("pause");
//	return 0;
//}