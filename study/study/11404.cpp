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
#include <set>
#include <sstream>
using namespace std;
/*
int INF = INT_MAX;
int n,m;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int d[101][101];
	cin >> n;
	cin >> m;
	fill(&d[0][0], &d[n+1][n+1], 9999999);

	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = min(c,d[a][b]);
		
	}
	for (int i = 1; i <= n; i++)
	{
		d[i][i] = 0;
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (d[i][k] + d[k][j] < d[i][j])
					d[i][j] = d[i][k] + d[k][j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (d[i][j] == 9999999)
				d[i][j] = 0;
			cout << d[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}*/