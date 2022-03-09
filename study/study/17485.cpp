//#include <bits/stdc++.h>
//using namespace std;
//
//int N, M;
//int map1[1001][1001];
//int dp[1001][1001][5];
//
//int solve(int x, int y, int t) {
//	int &ret = dp[x][y][t];
//	if (x == N) return 0;
//	if (ret != 99999999) return ret;
//	if (y - 1 >= 0 && t != 0) { // 왼쪽 아래
//		ret = min(ret, solve(x + 1, y - 1, 0) + map1[x][y]);
//	}
//	if (t != 1)//중앙
//		ret = min(ret, solve(x + 1, y, 1) + map1[x][y]);
//	if (t != 2 && y + 1<M)//오른쪽 아래
//		ret = min(ret, solve(x + 1, y + 1, 2) + map1[x][y]);
//
//	return ret;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map1[i][j];
//			for (int k = 0; k < 4; k++)
//				dp[i][j][k] = 99999999;
//		}
//	}
//	int MIN = 99999999;
//	for (int i = 0; i < M; i++) {
//
//		MIN = min(MIN, solve(0, i, 3));
//	}
//	cout << MIN << endl;
//
//	system("pause");
//	return 0;
//}