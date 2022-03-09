//#include <bits/stdc++.h>
//#define endl "\n"
//using namespace std;
//
//int N, M;
//long long dis[501];
//vector<pair<pair<int, int>, int>>edge;
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) dis[i] = INT_MAX;
//	for (int i = 0; i < M; i++) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//		edge.push_back(make_pair(make_pair(from, to), cost));
//	}
//
//	dis[1] = 0;
//	for (int i = 1; i <= N - 1; i++) {
//		for (int j = 0; j < edge.size(); j++) {
//			int from = edge[j].first.first;
//			int to = edge[j].first.second;
//			int cost = edge[j].second;
//
//			if (dis[from] == INT_MAX) continue; // 아직 업데이트 안됨
//			if (dis[to] > dis[from] + cost) dis[to] = dis[from] + cost;
//		}
//	}
//	for (int j = 0; j < edge.size(); j++) {
//		int from = edge[j].first.first;
//		int to = edge[j].first.second;
//		int cost = edge[j].second;
//
//		if (dis[from] == INT_MAX) continue; // 아직 업데이트 안됨
//		if (dis[to] > dis[from] + cost) {
//			cout << -1 << endl; //무한히 음수
//			return 0; 
//		}
//		
//	}
//	for (int i = 2; i <= N; i++) {
//		if (dis[i] == INT_MAX) cout << -1 << endl;
//		else cout << dis[i] << endl;
//	}
//	system("pause");
//	return 0;
//}