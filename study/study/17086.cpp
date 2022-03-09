//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int N, M;
//int space[51][51];
//int ans=0;
//queue<pair<pair<int, int>,int> >pq;
//int dx[] = { 1,1,1,0,0,-1,-1,-1 };//8πÊ«‚
//int dy[] = { 1,0,-1,1,-1,1,0,-1 };
//bool check[51][51];
//void bfs() {
//	while (!pq.empty()) {
//		int x = pq.front().first.second;
//		int y = pq.front().first.first;
//		int cnt = pq.front().second;
//		pq.pop();
//		if (space[y][x] == 1) {
//
//			ans = max(ans, cnt);
//			return;
//		}
//		for (int i = 0; i < 8; i++) {
//			int newx = x + dx[i];
//			int newy = y + dy[i];
//			if (newx < 0 || newy < 0 || newy >= N || newx >= M) {
//				continue;
//			}
//			if (!check[newy][newx])
//			{
//				check[newy][newx] = true;
//				pq.push(make_pair(make_pair(newy, newx), cnt+1));
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> space[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (space[i][j] == 0) {
//				pq.push(make_pair(make_pair(i, j),0));
//				check[i][j] = true;
//				bfs();
//				while (!pq.empty()) {
//					pq.pop();
//				}
//				memset(check, false, sizeof(check));
//			}
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}
