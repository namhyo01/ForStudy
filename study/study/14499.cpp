//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int N, M;
//int x, y, K;
//int map1[21][21];
//vector<int>dice(6);//0윗면, 1 북쪽 2 남쪽 3 동쪽 4서쪽 5 아래
//int dx[] = { 1,-1,0,0 };
//int dy[] = { 0,0,-1,1 };
//int order[1002];
//
//void east() {
//	dice = { dice[4],dice[1],dice[2],dice[0],dice[5],dice[3] };
//}
//void west() {
//	dice = { dice[3],dice[1],dice[2],dice[5],dice[0],dice[4] };
//}
//void south() {
//	dice = { dice[1],dice[5],dice[0],dice[3],dice[4],dice[2] };
//}
//void north() {
//	dice = { dice[2],dice[0],dice[5],dice[3],dice[4],dice[1] };
//}
//
//void roll(int doit) {
//	switch (doit) {
//	case 0:
//		east();
//		break;
//	case 1:
//		west();
//		break;
//	case 2:
//		north();
//		break;
//	case 3:
//		south();
//		break;
//	default:
//		break;
//
//	}
//}
//
//void solve() {
//	for (int i = 0; i<K; i++) {
//		int doit = order[i] - 1;
//		int newx = x + dx[doit];
//		int newy = y + dy[doit];
//		if (newx < 0 || newy < 0 || newx >= M || newy >= N) continue;
//		x = newx;
//		y = newy;
//		roll(doit);
//		cout << dice[0] << endl;
//		if (map1[y][x] == 0) { // 맵이 0이면 주사위 바닥에 있는 수가 칸에 복사
//			map1[y][x] = dice[5];
//		}
//		else {
//			dice[5] = map1[y][x];
//			map1[y][x] = 0;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> x >> y >> K;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> map1[i][j];
//	for (int i = 0; i < K; i++) {
//		cin >> order[i];
//
//	}
//	solve();
//	system("pause");
//	return 0;
//}
