//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int dy[] = { 0,0,1,-1 };
//int dx[] = { 1,-1,0,0 };
//
//char arr[51][51];
//bool check[51][51];
//int N, M;
//int ans;
//
//void bfs(int y, int x) {
//	check[y][x] = true;
//	queue<pair<pair<int, int>, int> > pq;
//	pq.push(make_pair(make_pair(y, x), 0));
//	while (!pq.empty()) {
//		int _y = pq.front().first.first;
//		int _x = pq.front().first.second;
//		int cnt = pq.front().second;
//		pq.pop();
//		if (cnt > ans)
//			ans = cnt;
//		for (int i = 0; i < 4; i++) {
//			int ny = _y + dy[i];
//			int nx = _x + dx[i];
//			
//			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
//			if (!check[ny][nx] && arr[ny][nx]=='L') {
//				check[ny][nx] = true;
//				pq.push(make_pair(make_pair(ny, nx), cnt+1));
//			}
//
//		}
//	}
//}
//
//
//void reset() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			check[i][j] = false;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (arr[i][j] == 'L') {
//				reset();
//				bfs(i,j);
//			}
//		}
//	}
//	cout << ans << endl;
//	
//	system("pause");
//	return 0;
//}