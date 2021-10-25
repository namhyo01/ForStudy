#include <iostream>
#include <algorithm>
#include <climits>
#include <functional>
#include <vector>
#include <string>
#include <string.h>
#include<math.h>
#include <stdio.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <unordered_map>
#include <deque>
#include <sstream>
using namespace std;
/*
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	int num[100001];
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	int dp[100001] = { 0, };
	dp[0] = num[0];
	for (int i = 1; i < N; i++) {
		dp[i] = dp[i - 1] + num[i];
	}

	while (M--) {
		int i, j;
		cin >> i>> j;
		long long sum = 0;
		i--, j--;
		if (i == 0)
			sum += dp[j];
		else
			sum += dp[j] - dp[i - 1];
		cout << sum << endl;

	}
	system("pause");
	return 0;

}*/