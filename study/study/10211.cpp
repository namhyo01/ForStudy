//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	while (T--) {
//		int X[1001];
//		int N;
//		int dp[1001];
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			cin >> X[i];
//		}
//		dp[0] = X[0];
//		for (int i = 1; i < N; i++) {
//			dp[i] = max(X[i], dp[i - 1] + X[i]);	
//		}
//		int ans = INT_MIN;
//		for (int i = 0; i < N; i++) {
//			ans = max(ans, dp[i]);
//		}
//		cout << ans << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}