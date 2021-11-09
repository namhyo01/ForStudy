//#include <bits/stdc++.h>
//
//using namespace std;
//vector<int> points[5001];
//int N;
//int ans;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	int forcheck = 0;
//	for (int i = 0; i < N; i++) {
//		int a, b;
//		cin >> a >> b;
//		points[b].push_back(a);
//		forcheck = forcheck < b ? b : forcheck;
//	}
//	for (int i = 0; i <= forcheck; i++) {
//		if (points[i].size() == 0)
//			continue;
//		sort(points[i].begin(), points[i].end());
//
//		for (int j = 0; j < points[i].size(); j++)
//		{
//			if (j == 0)
//			{
//				ans += points[i][j + 1] - points[i][j];
//
//				continue;
//			}
//			if (j == points[i].size() - 1) {
//				ans += points[i][j] - points[i][j - 1];
//
//				continue;
//			}
//			ans +=  min(points[i][j] - points[i][j - 1],  points[i][j + 1]-points[i][j] );
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}