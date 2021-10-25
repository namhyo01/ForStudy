#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>

using namespace std;
/*
vector<pair<int, int>> arr;
int N;

int dp[502];

/*
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}
	sort(arr.begin(), arr.end());
	memset(dp, -1, sizeof(dp));
	int max_dp = -1;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i].second > arr[j].second) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		max_dp = max(max_dp, dp[i]);
	}
	cout << N - max_dp << endl;
	system("pause");
	return 0;

}*/