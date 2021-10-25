#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
// 역으로 최대로 길게 만들수 있는것을 전체에서 빼면 풀리는 문제이다
vector <pair<int, int> >arr;
int N;
int dp[102];

int main() {

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		arr.push_back({ a,b });
	}
	sort(arr.begin(), arr.end());// 정렬 A기준으로
	int max_dp = 0;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i].second>arr[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		max_dp = max(max_dp, dp[i]);
	}


	printf("%d\n", N-max_dp);
	system("pause");
	return 0;
}*/