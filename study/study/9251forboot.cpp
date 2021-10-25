#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>

using namespace std;
/*
string a, b;
int dp[1001][1001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;
	int lcs_length = 0;
	int ret = 0;
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			if (a.at(i - 1) == b.at(j - 1))
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			ret = max(ret, dp[i][j]);
		}
		
	}
	cout << ret << endl;
	system("pause");
	return 0;
}*/