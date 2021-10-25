#include <iostream>
#include <algorithm>
#include <climits>
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
using namespace std;
/*
int M, N;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
bool check[51][51];
bool map[51][51];
/*
void dfs(int x, int y) {
	check[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int ax = dx[i] + x;
		int ay = dy[i] + y;
		if (ax >= 0 && ay >= 0 && ax < M && ay < N) {
			if (map[ax][ay]) {
				if (!check[ax][ay]) {
					dfs(ax, ay);
				}
			}
		}
	}


}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int cnt = 0;
		int K;
		memset(map, false, sizeof(map));
		memset(check, false, sizeof(check));
		cin >> M >> N >> K;
		while (K--) {
			int x, y;
			cin >> x >> y;
			map[x][y] = true;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j]) {//지렁이가 있으면
					if (!check[i][j]) {//아직 안가본대면
						cnt++;
						dfs(i, j);
					}
				}
			}
		}
		cout << cnt << endl;

	}


	system("pause");
	return 0;
}*/
/*
void bfs(int x, int y) {
	map[x][y] = false;
	queue<pair<int, int> >adjacent;
	adjacent.push(make_pair(x, y));
	while (!adjacent.empty()) {
		int new_x = adjacent.front().first;
		int new_y = adjacent.front().second;
		adjacent.pop();
		for (int i = 0; i < 4; i++) {
			int ax = new_x + dx[i];
			int ay = new_y + dy[i];
			if (ax >= 0 && ay >= 0 && ax < M&&ay < N) {
				if (map[ax][ay]) {
						adjacent.push(make_pair(ax, ay));
						map[ax][ay] = false;
					}
				
			}


		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int cnt = 0;
		int K;
		memset(map, false, sizeof(map));
		cin >> M >> N >> K;
		while (K--) {
			int x, y;
			cin >> x >> y;
			map[x][y] = true;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j]) {//지렁이가 있으면
						cnt++;
						bfs(i, j);
					}
				
			}
		}
		cout << cnt << endl;

	}


	system("pause");
	return 0;
}*/