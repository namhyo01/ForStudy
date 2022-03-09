//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//
//
///*
//	knapsack과 비슷
//
//	인접한것은 고르지말라 == 그럼 그 2번째 전께 골라진 경우의 수 + 이전거가 택 안된 경우의 수
//
//*/
//int N, K;
//
//int dp[1001][1001];
//
//int calc(int cur, int x) {//n,k
//	if (cur <= 0 || cur < 2 * x) return 0;
//	if (x == 1) return cur;
//	int &cache = dp[cur][x];
//	if (cache != -1) return cache;
//	return cache = (calc(cur - 2,x - 1) + calc(cur-1,x))%1000000003;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> K;
//	if (K > (N / 2)) {
//		cout << 0 << endl;
//		return 0;
//	}
//	memset(dp, -1, sizeof(dp));
//	cout << calc(N, K) << endl;
//	system("pause");
//	return 0;
//}