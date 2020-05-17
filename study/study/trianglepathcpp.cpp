#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int trianglepath[100][100];
int cache[101][101];

int path(int y, int x);
int n;
int main() {
	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		memset(cache, -1, sizeof(cache));
		memset(trianglepath, 0, sizeof(trianglepath));
		cin >> n;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < j+1; k++) {
				cin >> trianglepath[j][k];
				
			}
		}

		cout << path(0, 0) << endl;
	}
	system("pause");
	return 0;
}

int path(int y, int x) {
	if (y == n - 1) return trianglepath[y][x]; // 끝이 나면은

	int &ret = cache[y][x];

	if (ret != -1) return ret;
	return ret = max(path(y + 1, x), path(y + 1, x + 1)) + trianglepath[y][x];

}