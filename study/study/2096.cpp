//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N;
//int dp[2][3];
//int dp2[2][3];
//
//int find_max(int A, int B, int C) {
//	if (A >= B&&A >= C)
//		return A;
//	if (B >= C&&B >= A)
//		return B;
//	return C;
//}
//
//int find_min(int A, int B, int C) {
//	if (A <= B&&A <= C)
//		return A;
//	if (B <= A&&B <= C)
//		return B;
//	return C;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	for (int i = 0; i < N;i++) {
//		int A, B, C;
//		cin >> A >> B >> C;
//		if (i == 0) {
//			dp[i][0] = A;
//			dp[i][1] = B;
//			dp[i][2] = C;
//			dp2[i][0] = A;
//			dp2[i][1] = B;
//			dp2[i][2] = C;
//		}
//		else {
//			if (i % 2 == 0) {
//				dp2[0][0] = min(dp2[1][0], dp2[1][1]) + A;
//				dp2[0][1] = find_min(dp2[1][1], dp2[1][0], dp2[1][2]) + B;
//				dp2[0][2] = min(dp2[1][1], dp2[1][2]) + C;
//
//				dp[0][0] = max(dp[1][0], dp[1][1]) + A;
//				dp[0][1] = find_max(dp[1][1], dp[1][0], dp[1][2]) + B;
//				dp[0][2] = max(dp[1][1], dp[1][2]) + C;
//			}
//			else {
//				dp2[1][0] = min(dp2[0][0], dp2[0][1]) + A;
//				dp2[1][1] = find_min(dp2[0][1], dp2[0][0], dp2[0][2]) + B;
//				dp2[1][2] = min(dp2[0][1], dp2[0][2]) + C;
//
//				dp[1][0] = max(dp[0][0], dp[0][1]) + A;
//				dp[1][1] = find_max(dp[0][1], dp[0][0], dp[0][2]) + B;
//				dp[1][2] = max(dp[0][1], dp[0][2]) + C;
//			}
//		}
//	}
//	N = N % 2 == 1 ? 0 : 1;
//	cout << find_max(dp[N][0], dp[N][1], dp[N][2]) << " " << find_min(dp2[N][0], dp2[N][1], dp2[N][2])<<endl;
//	system("pause");
//	return 0;
//}