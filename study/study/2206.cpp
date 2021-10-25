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
#define endl "\n"
#pragma warning(disable:4996)
int n, m;
int map[1002][1002];
bool check[1002][1002][2];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int main() {
	ios::sync_with_stdio(0);; cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//cin >> map[i][j];
			scanf("%1d", &map[i][j]);
		}
	}
	queue<pair<pair<pair<int, int>,int>,bool> >pq; // x,y,cnt
	pq.push(make_pair(make_pair(make_pair(0,0),1),false));
	int ans = -1;
	check[0][0][0] = true;
	while (!pq.empty()) {
		int x = pq.front().first.first.first;
		int y = pq.front().first.first.second;
		int cnt = pq.front().first.second;
		int wall = pq.front().second;
		pq.pop();
		if (x == n - 1 && y == m - 1) {
			ans = cnt;
			break;
		}
		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if (new_x >= 0 && new_y >= 0 && new_x < n && new_y < m) {

				
				if (wall) {
					if (!check[new_x][new_y][1]&&map[new_x][new_y]==0) {
						check[new_x][new_y][1] = true;
						pq.push(make_pair(make_pair(make_pair(new_x, new_y), cnt + 1), wall));
					}
				}
				else {
					if (!check[new_x][new_y][0]) {
						if (map[new_x][new_y] == 1) {
							check[new_x][new_y][1] = true;
							pq.push(make_pair(make_pair(make_pair(new_x, new_y), cnt + 1), true));
						}
						else {
							check[new_x][new_y][0] = true;
							pq.push(make_pair(make_pair(make_pair(new_x, new_y), cnt + 1), false));
						}
					}
				}
				
			}
		}

	}
	cout << ans << endl;
	system("pause");
	return 0;
}*/