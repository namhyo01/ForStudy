#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)

/*
using namespace std;
int N;
int dp[101][10]; //���� 10�� ���� �ϴ� �����̴�.


int main() {
	scanf("%d", &N);
	for (int i = 0; i <= 9; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				//j�� 0�϶� ������ ���� ���ڴ� ������ 1�̴�.
				dp[i][j] = dp[i - 1][1];
			}
			else if (j == 9) {
				//j�� 9�̸� �״��� �ü��ִ� ���ڴ� ������ 8�̴�.
				dp[i][j] = dp[i - 1][8];
			}
			else {
				dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % 1000000000;
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= 9; i++)
		sum = (sum+dp[N][i])%1000000000;
	printf("%d\n", sum);
	system("pause");
	return 0;
}*/