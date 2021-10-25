#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*

//점화식 문제
//A[n-1]+A[n-2] = A[n]이것을 구하자

int n;
int dp[1000001] = { 1,2,3, 5, };

int solution(int N) {
	if (dp[N] != 0)
		return dp[N];
	return dp[N] = (solution(N - 1) + solution(N - 2))%15746;
}


int main() {
	scanf("%d", &n);
	printf("%d", solution(n-1));
	system("pause");
	return 0;
}*/