#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*/
int net[101][101];
int co[101];
int N,pairs;
int cnt;
void dfs(int n) {
	cnt++;
	co[n] = 1;
	for (int i = 1; i <= N; i++) {
		if (net[n][i] && !co[i])
			dfs(i);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	cin >> pairs;
	for (int i = 0; i < pairs; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		net[n1][n2] = 1;
		net[n2][n1] = 1;
	}
	dfs(1);
	cout << cnt-1 << endl;

	system("pause");
	return 0;
}*/