#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
/*
char map[5][5];
int dp[5][5][10];
string word;
int hasword(int y, int x, int wordIndex);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int C;
	cin >> C;
	while (C--) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> map[i][j];
			}
		}
		int N;
		cin >> N;
		for (int i = 0; i < N; i++) {
			int IsWord = 0;
			memset(dp, -1, sizeof(dp)); // dp초기화
			word.clear();
			cin >> word;
			for (int x = 0; x < 5; x++) {
				for (int y = 0; y < 5; y++) {
					IsWord = hasword(y, x, 0);
					if (IsWord) {
						y = 5;
						x = 5;
						
					}
				}
			}
			if (IsWord)
				cout << word << " " << "YES" << endl;
			else
				cout << word << " " << "NO" << endl;
		}
	}
	system("pause");
	return 0;
}
int hasword(int y, int x, int wordIndex) {
	if (y < 0 || x < 0 || x>4 || y>4)
		return 0;
	int &ret = dp[y][x][wordIndex];

	if (ret != -1) {
		return ret;
	}
	if (word.at(wordIndex) == map[y][x]) {//단어가 같다
		wordIndex++;
	}//같지 않는경우
	else {
		return ret=0;
	}
	if (wordIndex == word.size()) { // 단어를 찾았다면
		return ret=1;
	}
	return ret = hasword(y + 1, x + 1, wordIndex) || hasword(y + 1, x, wordIndex) || hasword(y + 1, x - 1, wordIndex) || hasword(y, x + 1, wordIndex) || hasword(y - 1, x + 1, wordIndex) || hasword(y, x - 1, wordIndex) || hasword(y - 1, x - 1, wordIndex) || hasword(y - 1, x, wordIndex);

}*/