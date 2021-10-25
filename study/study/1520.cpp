#include <math.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

/*
int map[501][501];
int M, N; //N : 가로 M: 세로
int dp[501][501];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };


int dfs(int row, int col) {
	if (dp[row][col] != -1)
		return dp[row][col];
	if (row < 0 || col < 0 || row >= N || col >= M)
		return 0;
	if (row == 0 && col == 0) return 1;// 기저 사례

	dp[row][col] = 0;
	for (int i = 0; i < 4; i++) {
		int nextrow = row + dx[i], nextcol = col + dy[i];
		if (map[nextrow][nextcol] > map[row][col]) {
			dp[row][col] += dfs(nextrow, nextcol);
		}
	}
	return dp[row][col];
}


int dfs(int row, int col) {
	if (dp[row][col] != -1) 
		return dp[row][col];
	if (row == N-1&&col == M-1) 
		return 1;
	
	dp[row][col] = 0;
	for (int i = 0; i < 4; i++) {
		int nextx = row + dx[i], nexty = col + dy[i];
		if (nextx >= 0 && nextx < N&&nexty >= 0 && nexty <= M) {
			if (map[nextx][nexty] < map[row][col]) {
				dp[row][col] += dfs(nextx, nexty);
			}
		}
	}
	return dp[row][col];
}



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
	memset(dp, -1, sizeof(dp));
	cout << dfs(0, 0) << endl;
	system("pause");
	return 0;
}*/