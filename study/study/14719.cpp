#include <bits\stdc++.h>
using namespace std;
/*
int map1[501];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int h, w;
	int water = 0;
	cin >> h >> w;
	for (int i = 0; i < w; i++)
		cin >> map1[i];
	for (int i = 0; i < w; i++) {
		int left=0, right=0;
		for (int j = i; j >= 0; j--) {
			left = max(left, map1[j]);
		}
		for (int j = i; j < w; j++)
			right = max(right, map1[j]);
		water += min(left, right) - map1[i];
	}

	cout << water << endl;
	system("pause"); return 0;
}*/