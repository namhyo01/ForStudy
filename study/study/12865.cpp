#include <math.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <string>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

/*
int N, K;
int W[101];
int V[101];

int dp[101][110000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) { //j´Â ¹«°Ô
			if (j >= W[i])
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[N][K] << endl;
	system("pause");
	return 0;
}*/