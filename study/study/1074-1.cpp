#include <math.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <string>
#include <vector>
/*
using namespace std;
int N;
int r;
int c;
int answer;

void solve(int x, int y, int size) {
	if (x == c && y == r) {
		cout << answer << endl;
		return;
	}
	if (r < y + size && c < x + size && c >= x && r >= y) {
		solve(x, y, size / 2);//1»çºÐ¸é
		solve(x + size / 2, y, size / 2);
		solve(x, y + size / 2, size / 2);
		solve(x + size / 2, y + size / 2, size / 2);

	}
	else {
		answer += (size*size);
	}


}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N>>r>>c;
	solve(0, 0, 1 << N);

	system("pause");
	return 0;

}*/