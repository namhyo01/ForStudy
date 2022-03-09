//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int M, K;
//	int ctp[1001];
//
//	cin >> N;
//	cin >> M >> K;
//	int ctp_sum = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> ctp[i];
//		ctp_sum += ctp[i];
//	}
//	int ans = 0;
//	int total = M*K;
//	if (total > ctp_sum)
//	{
//		cout << "STRESS" << endl;
//	}
//	else {
//		sort(ctp, ctp + N,greater<int>());
//		for (int i = 0; i < N; i++) {
//			if (total <= 0)
//				break;
//			total -= ctp[i];
//			ans++;
//		}
//		cout << ans << endl;
//	}
//	system("pause");
//	return 0;
//}