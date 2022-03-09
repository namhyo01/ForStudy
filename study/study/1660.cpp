//#include <bits/stdc++.h>
//
//using namespace std;
//int N;
//int depo[300003];
//int dp[300003];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	cin >> N;
//	int cnt = 1;
//	depo[0] = 1;
//	int temp = 1;
//	while (1) {
//		temp = temp + (cnt + 1); // 대포알
//		depo[cnt] = depo[cnt - 1] + temp;
//		if (depo[cnt] > N)
//			break;
//		cnt++;
//	}
//	memset(dp, 9999999, sizeof(dp));
//
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 3;
//	for (int i = 4; i <= N; i++) {
//		int find_key = lower_bound(depo, depo + cnt, i) - depo;//인덱스 번호 찾고~
//		//cout << "i : " << i << "find_key" << find_key <<"value :" <<depo[find_key]<<endl;
//		if (depo[find_key] == i) {
//			dp[i] = 1;
//		}
//		else {
//			for(int j=0;j<find_key;j++)
//				dp[i] = min(dp[i],dp[i-depo[j]] + dp[depo[j]]);
//		}
//	}
//
//	cout << dp[N] << endl;
//	system("pause");
//	return 0;
//}