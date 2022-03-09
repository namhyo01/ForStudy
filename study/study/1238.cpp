//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//#define INF 10000000;
//
//int N,M,X;
//vector<pair<int,int> > adjlist[1002];
//int d[1002];
//int temp[1002];
//void dijkstra(int start) {
//	d[start] = 0;
//	priority_queue<pair<int, int> >pq;
//	pq.push(make_pair(0, start)); // 가까운 순서대로 처리
//	while (!pq.empty()) {
//		int current = pq.top().second;
//		int distance = -pq.top().first;// 짧은게 먼저오게
//		pq.pop();
//		//cout << current << endl;
//		if (d[current] < distance) continue;
//		for (int i = 0; i < adjlist[current].size(); i++) {
//			//선택 노드의 인접 리스트
//			int next = adjlist[current][i].second;
//			int nextDistance = adjlist[current][i].first+ distance;
//			if (nextDistance < d[next]) {//기존보다 저렴
//				d[next] = nextDistance;
//				pq.push(make_pair(-nextDistance, next));
//			}
//		}
//
//	}
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> X;
//	for (int i = 1; i <= N; i++)
//		d[i] = INF;
//	for (int i = 0; i < M; i++) {
//		int a, b,c;
//		cin >> a >> b>>c;
//		adjlist[a].push_back(make_pair(c, b));
//		//adjlist[b].push_back(make_pair(a, c));
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) d[j] = INF;
//		dijkstra(i);
//		temp[i] = d[X];
//	}
//
//	for (int i = 1; i <= N; i++)
//		d[i] = INF;
//	dijkstra(X);
//	int max_num = -10000;
//	
//	for (int i = 1; i <= N; i++) {
//		max_num = max(max_num, d[i] + temp[i]);
//		//cout << d[i]+temp[i] << endl;
//	}
//	cout << max_num << endl;
//
//
//	system("pause");
//	return 0;
//}
