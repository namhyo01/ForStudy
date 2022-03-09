//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int N, M;
//int color[300001];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	cin >> N >> M;
//	int right=0, left=1;
//	for (int i = 0; i < M; i++) {
//		cin >> color[i];
//		right = max(right, color[i]);
//	}
//	int ans = INT_MAX;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		int cnt = 0;
//		for (int i = 0; i < M; i++) {
//			cnt += color[i] / mid;
//			if (color[i] % mid != 0)
//				cnt++;
//		}
//		if (cnt <= N)
//		{
//			right = mid-1;
//			if (ans > mid) {
//				ans = mid;
//			}
//		}else {
//			left = mid+1;
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}