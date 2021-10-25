#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
/*
int N;
int chess[16];
int count1;

bool check_queen(int cur) {
	for (int i = 0; i < cur; i++) {
		if (chess[i] == chess[cur] || abs(chess[i] - chess[cur]) == abs(cur - i))
			return false;

	}
	return true;
}

void count_queen(int cnt) {
	if (cnt == N) {
		count1 += 1;
	}
	for (int i = 0; i < N; i++) {
		chess[cnt] = i;
		if(check_queen(cnt))
			count_queen(cnt + 1);
	}

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	count_queen(0);
	cout << count1 << endl;
	system("pause");
	return 0;
}*/