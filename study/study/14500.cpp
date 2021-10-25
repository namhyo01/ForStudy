//#include <iostream>
//#include <algorithm>
//#include <climits>
//#include <functional>
//#include <vector>
//#include <string>
//#include <string.h>
//#include<math.h>
//#include <stdio.h>
//#include <memory.h>
//#include <stack>
//#include <queue>
//#include <unordered_map>
//#include <deque>
//#include <set>
//#include <sstream>
//using namespace std;
//
//int N, M;
//int map[501][501];
//bool check[501][501];
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int ans = INT_MIN;
//
///*
//	けけけけ
//	け
//	け
//	け
//
//*/
//
//
//void dfs(int x, int y, int Sum, int cnt) {
//	check[x][y] = true;
//	if (cnt == 3) {
//		ans = max(ans, Sum);
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		int x1 = x + dx[i];
//		int y1 = y + dy[i];
//		if (x1 >= 0 && y1 >= 0 && x1 < N&&y1 < M) {
//			if (!check[x1][y1]) {
//				dfs(x1, y1, Sum + map[x1][y1], cnt + 1);
//				check[x1][y1] = false;
//			}
//		}
//	}
//}
//
//void solve1(int x, int y) {//ぬ
//	int sum = map[x][y] + map[x - 1][y] + map[x + 1][y] + map[x][y + 1];
//	ans = max(ans, sum);
//}
//void solve2(int x, int y) {//た
//	int sum = map[x][y] + map[x][y + 1] + map[x + 1][y] + map[x][y - 1];
//	ans = max(ans, sum);
//}
//void solve3(int x, int y) {//っ
//	int sum = map[x][y] + map[x - 1][y] + map[x][y + 1] + map[x][y - 1];
//	ans = max(ans, sum);
//}
//void solve4(int x, int y) {//で
//	int sum = map[x][y] + map[x - 1][y] + map[x + 1][y] + map[x][y - 1];
//	ans = max(ans, sum);
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			memset(check, false, sizeof(check));
//			dfs(i, j, map[i][j], 0);
//			if (i >= 1 && j + 1 < M&&i + 1<N) solve1(i, j);
//			if (i + 1 < N&&j + 1 < M&&j >= 1) solve2(i, j);
//			if (i >= 1 && j >= 1 && j + 1 < M) solve3(i, j);
//			if (i >= 1 && i + 1 < N&&j >= 1) solve4(i, j);
//
//		}
//	}
//	cout << ans << endl;
//	//system("pause");
//	return 0;
//}