//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
////dp[K][N} = dp[K-1][0]+...dp[K-1][N];
//
//int N, K;
//
//long long dp[201][201];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> K;
//	for (int i = 0; i <= N; i++) {
//		dp[1][i] = 1; //dp[K][N}
//	}
//	for (int k = 2; k <= K; k++) {
//		for (int i = 0; i <= N; i++) {
//			for (int j = 0; j <= i; j++) {
//				dp[k][i] += dp[k - 1][j];
//			}
//			dp[k][i] = dp[k][i] % 1000000000;
//		}
//	}
//	cout << dp[K][N] << endl;
//	system("pause");
//	return 0;
//}