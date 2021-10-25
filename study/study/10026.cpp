#include <iostream>
#include <algorithm>
#include <climits>
#include <functional>
#include <vector>
#include <string>
#include <string.h>
#include<math.h>
#include <stdio.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <unordered_map>
#include <deque>
#include <set>
#include <sstream>
using namespace std;

/*
int N;
char map[101][101];
char map1[101][101];
bool check[101][101];
bool check1[101][101];
int dx[] = { 0,0,1,-1 };
int dy[] = { -1,1,0,0 };
char color = 'H';
char color1 = 'H';
void dfs(int x, int y) {
	check[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if (x1 >= 0 && y1 >= 0 && x1<N && y1<N) {
			if (map[x][y] == map[x1][y1] && !check[x1][y1]) {
				check[x1][y1] = true;
				dfs(x1, y1);
			}
		}
	}
}
void dfs1(int x, int y) {
	check1[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if (x1 >= 0 && y1 >= 0 && x1<N && y1<N) {
			if (map1[x][y] == map1[x1][y1] && !check1[x1][y1]) {
				check1[x1][y1] = true;
				dfs1(x1, y1);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'B')
				map1[i][j] = map[i][j];
			else
				map1[i][j] = 'R';
		}
	}
	int cnt = 0;
	int cnt1 = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

			if (!check[i][j]) {
				dfs(i, j);
				cnt++;
			}
			if (!check1[i][j]) {
				dfs1(i, j);
				cnt1++;
			}

		}
	}
	cout << cnt << " " << cnt1 << endl;
	//system("pause");
	return 0;
}*/