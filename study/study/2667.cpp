#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };

int num_apart=-1; // 아파트 단지 수
int aparts[25 * 25] = { 0, };// 각 단지별 집의 수

int map[25][25];
int N;
bool visited[25][25] = { 0, };

void dfs(int x, int y) {
	visited[x][y] = true; //지금 방문했으니 true가 됀다.
	aparts[num_apart]++;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (0 <= nx && 0 <= ny && nx < N && ny < N) {
			if (map[nx][ny] == 1 && !visited[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && map[i][j] == 1) {
				num_apart++;
				dfs(i, j);
			}
		}
	}
	printf("%d\n", num_apart+1);
	sort(aparts, aparts + num_apart+1);
	for (int i = 0; i < num_apart+1; i++) {
		printf("%d\n", aparts[i]);
	}
	system("pause");
	return 0;
}*/