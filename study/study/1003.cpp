#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int dp[50];
int n;
int num_0 = 0, num_1 = 0;

int fibonacchi(int n) {
	if (n == 0) {
		dp[0] = 0;
		return 0;
	}
	if (n == 1) {
		dp[1] = 1;
		return 1;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	return dp[n] = fibonacchi(n - 1) + fibonacchi(n - 2);

}

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		if (n == 0)
			printf("%d %d\n", 1, 0);
		else if (n == 1)
			printf("%d %d\n", 0, 1);
		else {
			fibonacchi(n);
			printf("%d %d\n", dp[n - 1], dp[n]);
			//���� �������� n�� 0�ǰ��� ������ ���� n�� 1�ǰ����̴�
		}
	}


	//system("pause");
	return 0;
}*/