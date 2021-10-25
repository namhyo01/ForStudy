#include <iostream>
#include <algorithm>

using namespace std;
/*
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
		dp[i] = 1;
		for (int j = 0; j <i; j++) {
			if (A[i] < A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int small = 0;
	for (int i = 0; i < N; i++) {
		small = max(small, dp[i]);
	}
	cout << small << endl;
	system("pause");
	return 0;
}*/