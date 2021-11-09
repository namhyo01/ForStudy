//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//int M, N;
//char nemo[1001][1001];
//bool check[1001][1001];
//
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> M >> N;
//	queue<pair<int, int> > pq;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> nemo[i][j];
//			if (i == 0 && nemo[i][j] == '0') {
//				pq.push(make_pair(i, j));
//			}
//		}
//	}
//	bool pass = false;
//	while (!pq.empty()) {
//		int x = pq.front().second;
//		int y = pq.front().first;
//		pq.pop();
//		if (y == M - 1) {
//			pass = true;
//			break;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nextx = x + dx[i];
//			int nexty = y + dy[i];
//			if (nextx >= 0 && nexty >= 0 && nextx < N&&nexty < M) {
//				if (!check[nextx][nexty] && nemo[nexty][nextx]=='0') {
//					pq.push(make_pair(nexty, nextx));
//					check[nextx][nexty] = true;
//				}
//			}
//		}
//	}
//	if (pass)
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//	system("pause");
//	return 0;
//}