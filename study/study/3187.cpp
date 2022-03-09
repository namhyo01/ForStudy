//#include<bits/stdc++.h>
//
//using namespace std;
//
//int R, C;
//char wool[251][251];
//int cnt_sheep, cnt_wolf;
//bool check[251][251];
//int dx[] = { -1,1,0,0 };
//int dy[] = { 0,0,-1,1 };
//
//void dfs(int x, int y) {
//	check[x][y] = true;
//	if (wool[x][y] == 'v')
//		cnt_wolf++;
//	if (wool[x][y] == 'k')
//		cnt_sheep++;
//	for (int i = 0; i < 4; i++) {
//		int x1 = x + dx[i];
//		int y1 = y + dy[i];
//		if (x1 < 0 || y1 < 0 || x1 >= R || y1 >= C) continue;
//		if (!check[x1][y1] && wool[x1][y1] != '#') {
//			//cout << "x1 : " << x1 << " y1 : " << y1 << endl;
//			dfs(x1, y1);
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int ans_wolf = 0, ans_sheep = 0;
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++)
//		{
//			cin >> wool[i][j];
//		}
//	}
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cnt_sheep= cnt_wolf=0;
//			if (!check[i][j] && wool[i][j] != '#') {
//				dfs(i, j);
//				if (cnt_sheep == 0 && cnt_wolf == 0)
//					continue;
//				if (cnt_sheep > cnt_wolf)
//					ans_sheep += cnt_sheep;
//				else
//					ans_wolf += cnt_wolf;
//			}
//		}
//	}
//
//	cout << ans_sheep << " " << ans_wolf << endl;
//
//	system("pause");
//	return 0;
//}