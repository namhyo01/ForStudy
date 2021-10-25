#include <iostream>
#include <algorithm>
/*
using namespace std;
int N;
int A[1001];
int dp[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++) {
		dp[i] = A[i];
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[j] + A[i], dp[i]);
			}
		}
	}
	int max_good = 0;
	for (int i = 0; i < N; i++) {
		max_good = max(max_good, dp[i]);
	}
	cout << max_good << endl;
	system("pause");
	return 0;
}*/