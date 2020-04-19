#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#include<math.h>
#pragma warning(disable:4996)
using namespace std;

int n, board[100][100];
int cache[100][100] = { -1, };
int jump2(int y, int x);

int main() {
	int C;
	cin >> C;
	for(int i = 0; i < C; i++) {
		memset(board, 0, sizeof(board));
		memset(cache, -1, sizeof(cache));
		cin >> n;
		for (int k = 0; k < n; k++) {
			for (int l = 0; l < n; l++) {
				cin >> board[k][l];
			}
		}
		if (jump2(0, 0) == 1)
			cout << "YES" << endl;
		else
			cout << "NO"<<endl;
	}

	system("pause");
	return 0;
}

int jump2(int y, int x) {
	// 기저사례 정리
	if (y >= n || x >= n) return 0;
	if (y == n - 1 && x == n - 1) return 1;
	//메모이제이션
	int &ret = cache[y][x];
	if (ret != -1) return ret;
	int jumpSize = board[y][x];
	return ret = (jump2(y + jumpSize, x) || jump2(y, x + jumpSize));
}