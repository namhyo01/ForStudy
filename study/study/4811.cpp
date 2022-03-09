//#include <bits/stdc++.h>
//
//using namespace std;
//
//long long ans;
//long long dp[31][61];
//
//long long check(int w,int h){
//	if (w == 0) return 1;
//	long long &ret = dp[w][h];
//	if (dp[w][h] != -1) return ret;
//	ret = 0;
//	if (w > 0) {
//		ret += check(w - 1, h+1);
//	}
//	if (h > 0)
//		ret += check(w, h - 1);
//	return ret;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	while (1) {
//		int N;
//		cin >> N;
//		memset(dp, -1, sizeof(dp));
//		if (N == 0) break;
//		cout << check(N,0) << endl;
//
//	}
//
//
//	system("pause");
//	return 0;
//}