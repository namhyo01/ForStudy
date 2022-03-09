//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector <long long> ans;
//
//void solve(long long index, int cnt) {
//	if (cnt > 10)
//		return;
//	ans.push_back(index);
//	for (int i = 0; i < 10; i++) {
//		if (index % 10 > i)
//			solve(index * 10 + i, cnt + 1);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	for (int i = 0; i < 10; i++)
//		solve(i, 1);
//	sort(ans.begin(), ans.end());
//	int N;
//	cin >> N;
//	if (N > 1022)
//		cout << -1 << endl;
//	else
//		cout << ans[N] << endl;
//	system("pause");
//	return 0;
//}