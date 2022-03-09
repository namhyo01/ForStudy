//#include<bits/stdc++.h>
//
//using namespace std;
//
//
//int dp[41];
//int num[41];
//int ans = 1;
//int N, M;
//
//void cal() {
//	for (int i = 1; i <= M; i++) {
//		ans *= dp[num[i] - num[i - 1] - 1];
//	}
//	ans *= dp[N - num[M]];
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	
//	cin >> N >> M;
//	dp[0] = 1, dp[1] = 1;
//	for (int i = 2; i <= N; i++)
//		dp[i] = dp[i - 1] + dp[i - 2];
//
//	for (int i = 1; i <= M; i++)
//		cin >> num[i];
//
//	cal();
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}