#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int N,M;
int lists[9];
bool visited[9] = { 0, };

void dfs(int pre, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", lists[i]);
		}
		printf("\n");
	}

	for (int i = pre; i < N; i++) {
		if (!visited[i]) {//방문하지 않았다면
			visited[i] = true;
			lists[cnt] = i+1;
			dfs(i,cnt + 1);
			visited[i] = false;
		}
	}

}

int main()
{
	scanf("%d %d", &N, &M);
	dfs(0,0);
	system("pause");
	return 0;
}*/