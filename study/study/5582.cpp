//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl "\n"
//
//int ans;
//int dp[4001][4001];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	string a, b;
//	cin >> a >> b;
//	for (int i = 1; i <= a.size(); i++) {
//		for (int j = 1; j <= b.size(); j++) {
//			if (a.at(i - 1) == b.at(j-1)) {
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			}
//			else {
//				dp[i][j] = 0;
//			}
//			ans = max(ans, dp[i][j]);
//		}
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}