//#include <bits/stdc++.h>
//
//using namespace std;
//int n, m;
//int r, c, d;
//int room[51][51];
//bool visited[51][51];
//int cnt = 1;
//int dx[] = { -1 ,0,1,0 };
//int dy[] = { 0 ,1,0,-1 };
//int td;
//
//int direction() {
//	if (d == 0)
//		return 3;
//	else if (d == 1)
//		return 0;
//	else if (d == 2)
//		return 1;
//	else
//		return 2;
//}
//int back_direction() {
//	if (td == 0)
//		return 2;
//	if (td == 1)
//		return 3;
//	if (td == 2)
//		return 0;
//	return 1;
//}
//int count_wall = 0;
//
//int go() {
//	int temp = direction();
//	int rx = r + dx[temp];
//	int ry = c + dy[temp];
//	
//	if (rx >= 0 && ry >= 0 && rx < n&&ry < m) {
//		//2.1
//		if (!visited[rx][ry] && room[rx][ry] == 0) {
//			visited[rx][ry] = true;
//			r = rx;
//			c = ry;
//			d = temp;
//			td = temp;
//			cnt++;
//			count_wall = 0;
//			return 1;
//		}
//		if (room[rx][ry] == 1 || visited[rx][ry]) {
//			d = temp;
//			count_wall++;
//
//		}
//		if (count_wall == 4) {
//			rx 
//			//if (dx[back_dir] + r >= 0 && dy[back_dir] + c >= 0 && dx[back_dir] + r < n&&dy[back_dir] + c < m) {
//			if (r-room[dx[td]][c - dy[td]] == 1)
//				return -1;
//			r -= dx[td];
//			c -= dy[td];
//			count_wall = 0;
//			return 1;
//
//
//		}
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> m;
//	cin >> r >> c >> d;
//
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> room[i][j];
//		}
//	}
//	td = d;
//	while (go() != -1);
//	cout << cnt << endl;
//
//	system("pause");
//	return 0;
//}