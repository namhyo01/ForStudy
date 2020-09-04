#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int N;
#define MAX 9999999999
int A[100];
int _plus;
int _minus;
int mul;
int _div;

int max_num = -MAX;
int min_num = MAX;

void dfs(int plus, int minus, int mul, int div, int cnt, int result) {
	if (cnt == N) {
		max_num = result > max_num ? result : max_num;
		min_num = result > min_num ? min_num : result;
	}

	//모든 경우
	if (plus > 0) {
		dfs(plus - 1, minus, mul, div, cnt + 1, result + A[cnt]);
	}
	if (minus > 0) {
		dfs(plus, minus - 1, mul, div, cnt + 1, result - A[cnt]);
	}
	if (div > 0) {
		dfs(plus, minus, mul, div-1, cnt + 1, result / A[cnt]);
	}
	if (mul > 0) {
		dfs(plus, minus, mul - 1, div, cnt + 1, result*A[cnt]);
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	scanf("%d %d %d %d", &_plus, &_minus, &mul, &_div);
	dfs(_plus, _minus, mul, _div, 1, A[0]);
	printf("%d\n%d", max_num, min_num);
	//system("pause");
	return 0;
}*/