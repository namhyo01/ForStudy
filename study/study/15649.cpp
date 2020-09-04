#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
#define MAX 9
int N, M;
int num[MAX];
bool check[MAX] = { 0, };

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!check[i]) {// 아직 지나가지 않은곳이라면
			check[i] = true;
			num[cnt] = i;
			dfs(cnt + 1);
			check[i] = false;
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);
	dfs(0);
	system("pause");
	return 0;
}*/