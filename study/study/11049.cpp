#include <bits/stdc++.h>

using namespace std;

/*
#define endl "\n"
#define MAX 501
const int INF = INT_MAX;

int dp[MAX][MAX];
vector<pair<int, int> >matrix; //Çà·Ä r°ú c
int N;

int matrjx_solve(int n, int k) {
	if (n== k) return 0;
	int &ret = dp[n][k];
	if (ret != 0) return ret;
	int result = INF;
	for (int M = n; M < k; M++) {
		result = min(result, matrjx_solve(n, M) + matrjx_solve(M + 1, k) + matrix[n].first*matrix[M].second*matrix[k].second);
	}
	ret = result;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	while (N--) {
		int r, c;
		cin >> r >> c;
		matrix.push_back(make_pair(r, c));
	}
	cout << matrjx_solve(0, N - 1);

	system("pause");
	return 0;
}*/