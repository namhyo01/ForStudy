#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
// ������ �ִ�� ��� ����� �ִ°��� ��ü���� ���� Ǯ���� �����̴�
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
	sort(arr.begin(), arr.end());// ���� A��������
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