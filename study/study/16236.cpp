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
#define MAX 5000
#define MIN INT_MIN

int N;
int result = 0;
int eat_count = 0;
int baby_size = 2;
int eat_distance;
int arr[MAX][MAX];
int visit[MAX][MAX];
int Baby_x, Baby_y;
vector <pair <pair<int, int>, int>> Eat;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

void BFS(int init_x, int init_y) {
	eat_distance = MIN;
	Eat.clear();
	memset(visit, 0, sizeof(visit));
	queue<pair<int, int>> que;
	que.push(make_pair(init_x, init_y));

	while (!que.empty()) {
		int x = que.front().first; int y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i]; int ny = y + dy[i];

			if (0 > nx || N <= nx || 0 > ny || N <= ny) continue;
			if (visit[nx][ny] == 0 && baby_size >= arr[nx][ny]) { // 자기보다 큰 물고기 자리 못감
				visit[nx][ny] = visit[x][y] + 1;
				if (arr[nx][ny] > 0 && arr[nx][ny] < baby_size) {// 자기보다 작은 물고기 꿀꺽
					if (eat_distance >= visit[nx][ny]) {
						eat_distance = visit[nx][ny];
						Eat.push_back(make_pair(make_pair(eat_distance, nx), ny));
					}
				}
				que.push(make_pair(nx, ny));
			}
		}
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 9) {// 아기상어
				arr[i][j] = 0;
				Baby_x = i; Baby_y = j;
			}
		}
	}

	while (1) {
		BFS(Baby_x, Baby_y);

		if (Eat.empty()) break;
		else {
			sort(Eat.begin(), Eat.end());
			eat_count++;
			result += Eat[0].first.first;
			arr[Eat[0].first.second][Eat[0].second] = 0;
			Baby_x = Eat[0].first.second; Baby_y = Eat[0].second;
			if (baby_size == eat_count) {
				baby_size++; eat_count = 0;
			}
		}
	}
	cout << result;
	return 0;
}*/