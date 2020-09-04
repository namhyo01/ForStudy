#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;/*
#define MAX 20
int N;
int S[MAX + 1][MAX + 1];
bool meet[21] = { 0, };
int min_ability = 1000;

void dfs(int cnt,int cur) {
	if (cnt == N / 2) {
		int a = 0;
		int b = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if (meet[i] && meet[j]) {
					a += S[i][j];
					a += S[j][i];
				}
				else if (!meet[i] && !meet[j]) {
					b += S[i][j];
					b += S[j][i];
				}
			}
		}
		min_ability = abs(a-b) < min_ability ? abs(a-b) : min_ability;
	}
	for (int i = cur; i < N; i++) {
		if (!meet[i]) {
			meet[i] = true;
			dfs(cnt + 1, i + 1);
			meet[i] = false;
		}
	}
}

int main() {

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &S[i][j]);
		}
	}
	dfs(0, 0);
	printf("%d", min_ability);
	system("pause");
	return 0;
}*/