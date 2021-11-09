//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int N, M;
//int dx[] = { 1,0,1 };
//int dy[] = { 0,1,1 };
//int miro[1001][1001];
//int dp[1001][1001];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		miro[i][0] = 0;
//	for (int j = 0; j < M; j++)
//		miro[0][j] = 0;
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= M; j++)
//			cin >> miro[i][j];
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			int max_candy = 0;
//			max_candy = max(dp[i - 1][j], dp[i][j - 1]);
//			dp[i][j] = miro[i][j] + max(max_candy, dp[i - 1][j - 1]);
//		}
//	}
//
//	cout << dp[N][M]<<endl;
//
//	system("pause");
//	return 0;
//
//}