//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//long long dp[10010];
//int coin[22];
//int N, M;
//
//void solution() {
//	for (int i = 0; i < N; i++) {
//		for (int j = coin[i]; j <= M; j++) {
//			dp[j] = dp[j] + dp[j - coin[i]]; // f(x) = f(x-1) + f(x-2) => x-1 : 1원 추가해 x원 만듬, 2원 추가해 x원만듬
//		}
//	}
//	cout << dp[M]<<endl;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	
//	while (T--) {
//		memset(dp, 0, sizeof(dp));
//		dp[0] = 1;
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			cin >> coin[i];
//		cin >> M;
//		solution();
//
//	}
//
//
//	system("pause");
//	return 0;
//}