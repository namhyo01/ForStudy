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
int N, M;
int T;
int map[101][101];
bool check[101][101][2];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M>>T;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
	queue<pair<pair<pair<int, int>, int>, bool> >pq;
	pq.push(make_pair(make_pair(make_pair(0,0),0),false));
	int time = -1;
	int ans = -1;
	check[0][0][0] = true;
	while (!pq.empty()) {
		
		int x = pq.front().first.first.first;
		int y = pq.front().first.first.second;
		time = pq.front().first.second;
		bool gum = pq.front().second;
		if (x == N - 1 && y == M - 1)
		{
			ans = time;
			break;
		}
		pq.pop();
		if (map[x][y] == 2)
			gum = true;
		for (int i = 0; i < 4; i++) {
			int x1 = x + dx[i];
			int y1 = y + dy[i];
			if (x1 >= 0 && y1 >= 0 && x1 < N&&y1 < M) {
				if (!check[x1][y1][0] && map[x1][y1]!=1) {
					check[x1][y1][0] = true;
					pq.push(make_pair(make_pair(make_pair(x1, y1), time + 1), gum));
					
				}
				if (gum&&!check[x1][y1][1]) {
					check[x1][y1][1] = true;
					pq.push(make_pair(make_pair(make_pair(x1, y1), time + 1), gum));
				}
			}
		}
	}
	if (ans == -1)cout << "Fail" << endl;
	else cout << time << endl;
	system("pause"); 
	return 0;
}*/