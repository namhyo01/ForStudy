//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
////int n;
//bool check[105];
//vector<int> adj[105]; //이문제는 특이하게 그래프 이론이다
//
//void dfs(int next) {
//	check[next] = true;
//	for (auto n : adj[next]) {
//		if (check[n]) continue;
//		dfs(n);
//	}
//}
//
//int dist(const pair<int, int>a, const pair<int, int>b) {
//	return abs(a.first - b.first) + abs(a.second - b.second);
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		fill(check, check + 105, false);
//		for (int i = 0; i < 105; i++) adj[i].clear();
//		vector<pair<int, int>>v(n + 2);
//		for (auto &x : v) cin >> x.first >> x.second;
//		for (int i = 0; i < n + 2; i++) {
//			for (int j = i + 1; j < n + 2; j++) {
//				if (dist(v[i], v[j]) <= 1000) {
//					adj[i].push_back(j);
//					adj[j].push_back(i);
//				}
//			}
//		}
//		dfs(0);
//		if (check[n + 1]) cout << "happy" << endl;
//		else cout << "sad" << endl;
//
//	}
//
//
//	system("pause");
//	return 0;
//}