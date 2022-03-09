//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//#define INF INT_MAX
//
//int N, M, K, X;
//vector<pair<int,int> > dij[300001];
//int d[300001]; // 최소비용
//
//void dijkstra(int start) {
//	d[start] = 0;
//	priority_queue<pair<int, int> > pq;
//	pq.push(make_pair(0, start));
//	while (!pq.empty()) {
//		int current = pq.top().second;
//		int distance = -pq.top().first; // 짧은걸 먼저
//		pq.pop();
//		if (d[current] < distance) continue;
//		for (int i = 0; i < dij[current].size(); i++) {
//			int next = dij[current][i].first;
//			int nextDistance = distance + dij[current][i].second;
//			if (nextDistance < d[next]) {
//				d[next] = nextDistance;
//				pq.push(make_pair(-nextDistance, next));
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> K>>X;
//	for (int i = 1; i <= N; i++) {
//		d[i] = INF;
//	}
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		dij[a].push_back(make_pair(b, 1));
//	}
//	
//	dijkstra(X);
//	bool flag = false;
//	for (int i = 1; i <= N; i++) {
//		if (d[i] == K) {
//			cout << i << endl;
//			flag = true;
//		}
//			
//	}
//	if (!flag)
//		cout << -1 << endl;
//
//
//	system("pause");
//	return 0;
//}