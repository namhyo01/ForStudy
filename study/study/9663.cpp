#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
#define MAX 15
int N;
int count1 = 0;
int chess[MAX];

bool condition(int i) {
	for (int j = 0; j < i; j++) {
		// ���ε��� ü������ ������ �ִ� ���̶� ���� ���̰ų� �밢���̸� false�� ȣ���Ѵ�.
		if (chess[i] == chess[j] || abs(chess[i] - chess[j]) == (i - j)) {
			return false;
		}
	}
	return true;
}

void dfs(int cnt) {
	if (cnt == N) {
		count1 += 1;
		return;
	}
	for (int i = 0; i < N; i++) {
		chess[cnt] = i;
		if (condition(cnt)) {
			dfs(cnt + 1);
		}
	}



}

int main() {
	scanf("%d", &N);
	dfs(0);
	printf("%d", count1);

	system("pause");
	return 0;
}*/