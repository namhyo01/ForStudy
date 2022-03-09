//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//struct info {
//	int x;
//	int y;
//};
//
//
//int R, C;
//int ans;
//char map1[51][51];
//queue<info> S;
//queue<info> W;
//int px[4] = { 1,0,-1,0 };
//int py[4] = { 0,1,0,-1 };
//bool visited[51][51];
//
//void printt() {
//	for (int y = 1; y <= R; y++) {
//		for (int x = 1; x <= C; x++) {
//			cout << map1[y][x] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void W_move() {
//	int end_cnt = W.size();
//	for (int i = 0; i < end_cnt; i++) { //물 갯수만큼
//		int cx = W.front().x;
//		int cy = W.front().y;
//		W.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = cx + px[i];
//			int ny = cy + py[i];
//			if (ny > R || ny<1 || nx>C || nx < 1) continue;//범위 밖
//			if (map1[ny][nx] == '.') {
//				info n;
//				n.x = nx; n.y = ny;
//				map1[ny][nx] = '*';
//				W.push(n);
//			}
//		}
//	}
//}
//
//void S_move() {
//	bool check = false;
//	int time = 0;
//	while (!S.empty()) {
//		//cout << time << endl;
//		time++;
//		//printt();
//		W_move();
//		int end_d = S.size();
//		for (int d = 0; d < end_d; d++) {
//			int cx = S.front().x;
//			int cy = S.front().y;
//			S.pop();
//			if (map1[cy][cx] == 'D') {
//				check = true;
//				cout << time - 1 << endl;
//				break;
//			}
//			for (int i = 0; i < 4; i++) {
//				int nx = cx + px[i];
//				int ny = cy + py[i];
//				if (map1[ny][nx] == '*' || map1[ny][nx] == 'X' || map1[ny][nx] == 'S') continue; // 물이거나 돌인곳
//				if (ny > R || ny<1 || nx>C || nx < 1) continue;//범위 밖
//				info n;
//				n.x = nx; n.y = ny;
//				if (map1[ny][nx] == '.') map1[ny][nx] = 'S';
//				S.push(n);
//			}
//		}
//		if (check == true) break;
//	}
//	if (!check) cout << "KAKTUS" << endl;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//	cin >> R >> C;
//	for (int y = 1; y <= R; y++) {
//		for (int x = 1; x <= C; x++) {
//			cin >> map1[y][x];
//			if (map1[y][x] == 'S') {
//				info i;
//				i.x = x; i.y = y;
//				S.push(i);
//				visited[y][x] = true;
//			}// if D
//			if (map1[y][x] == 'D') {
//				info d;
//				d.x = x; d.y = y;
//			}// S
//			if (map1[y][x] == '*') {
//				info w;
//				w.x = x; w.y = y;
//				W.push(w);
//			}
//		}
//	}
//
//	S_move();
//
//
//}
