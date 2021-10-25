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
using namespace std;
/*
int dp[1000][13];

int Tile(int N, int state) {
	if (N < 0) return 0;
	if (N == 0) return state == 0;
	int &ret = dp[N][state];
	if (ret != -1) return ret;
	if (state == 12) {
		return ret = Tile(N - 1, 0) + Tile(N - 1, 3);
	}
	else if (state == 3) {
		return ret = Tile(N - 1, 0) + Tile(N - 1, 12);
	}
	else if (state == 6) {
		return ret = Tile(N - 1, 9);
	}
	else if (state == 9) {
		return ret = Tile(N - 1, 6) + Tile(N - 1, 0);
	}
	else {
		return ret = Tile(N - 1, 0) + Tile(N - 2, 0) + Tile(N - 1, 3) + Tile(N - 1, 12) + Tile(N - 1, 9);
	}
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	memset(dp, -1, sizeof(dp));
	while (T--) {
		int N;
		cin >> N;
		cout << Tile(N, 0)<<endl;
	}
	system("pause");
	return 0;

}*/