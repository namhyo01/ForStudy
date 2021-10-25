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
			//도착 전까지가 n의 0의개수 도착한 것이 n의 1의개수이다
		}
	}


	//system("pause");
	return 0;
}*/