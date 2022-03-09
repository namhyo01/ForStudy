//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,1,-1 };
//int N, M;
//char map1[11][11];
//bool check[11][11][11][11];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	int xr, yr, xb, yb;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map1[i][j];
//			if (map1[i][j] == 'R')
//			{
//				xr = j, yr = i;
//			}
//			else if (map1[i][j] == 'B')
//				xb = j, yb = i;
//
//		}
//
//	}
//	queue<pair<pair<int, int>, int> >red;
//	queue<pair<int, int> > blue;
//	red.push(make_pair(make_pair(yr, xr), 0));
//	blue.push(make_pair(yb, xb));
//	
//	while (!red.empty()) {
//		int nry, nrx, nrc, nby, nbx;
//		nry = red.front().first.first;
//		nrx = red.front().first.second;
//		nrc = red.front().second;
//		red.pop();
//		nby = blue.front().first;
//		nbx = blue.front().second;
//		blue.pop();
//		if (nrc > 10) {
//			break;
//		}
//		if (map1[nry][nrx] == 'O') {
//			cout << 1 << endl;
//			return 0;
//		}
//		for (int i = 0; i < 4; i++) {
//			int next_ry=nry, next_rx=nrx, next_by=nby, next_bx=nbx;
//			while (1) {
//				if (map1[next_ry][next_rx] == 'O' || map1[next_ry + dy[i]][next_rx + dx[i]] == '#')
//					break;
//				next_ry += dy[i];
//				next_rx += dx[i];
//			}
//			while (1) {
//				if (map1[next_by][next_bx] == 'O' || map1[next_by + dy[i]][next_bx + dx[i]] == '#')
//					break;
//				next_by += dy[i];
//				next_bx += dx[i];
//			}
//
//			if (next_ry == next_by && next_rx == next_bx) {//같은 좌표인 경우
//				if (map1[next_ry][next_rx] == 'O') {
//					continue;
//				}
//				else {
//					if (abs(next_rx - nrx) + abs(next_ry - nry) > abs(next_by - nby) + abs(next_bx - nbx)) {
//						next_rx -= dx[i];
//						next_ry -= dy[i];
//					}
//					else {
//						next_by -= dy[i];
//						next_bx -= dx[i];
//					}
//				}
//			}
//			if (map1[next_by][next_bx] == 'O')continue;
//			if (!check[next_ry][next_rx][next_by][next_bx]) {
//				red.push(make_pair(make_pair(next_ry, next_rx), nrc + 1));
//				blue.push(make_pair(next_by, next_bx));
//				check[next_ry][next_rx][next_by][next_bx] = true;
//			}
//
//
//		}
//
//
//
//	}
//	cout << 0 << endl;
//	system("pause");
//	return 0;
//}