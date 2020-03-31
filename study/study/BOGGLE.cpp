// 알고스팟 보글 문제

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;

char board[5][5]; //board 판
int cache[5][5][10]; // 결과값을 저장. memset으로 -1로 초기화 1은 성공, 0은 실패
string word;



int hasWord(int x, int y, int wordIndex);

/*int main()
{
	int C;
	int num = 0;
	cin >> C;
	for (int k = 0; k < C; k++) {
		for (int j = 0; j < 5; j++)
			cin >> board[j][0] >> board[j][1] >> board[j][2] >> board[j][3] >> board[j][4]; // 보드 입력


		int N;
		scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			bool IsTrue = false;
			memset(cache, -1, sizeof(cache)); // 각 단어를 돌떄마다 cache를 -1로 초기화
			word.clear();
			cin >> word;
			//printf("hu");

			for (int x = 0; x < 5; x++) {
				for (int y = 0; y < 5; y++) {
					if (hasWord(x, y, 0) == 1) {
						IsTrue = true;
						break;
					}
				}
				if (IsTrue)
					break;
			}
			if (IsTrue)
				cout << word << " YES" << endl;
			else
				cout << word << " NO" << endl;

		}
	}

	return 0;

}*/
int hasWord(int x, int y, int wordIndex) {
	if ((x < 0) || (x > 4) || (y > 4) || (y < 0))
		return 0;
	
	int &ret = cache[x][y][wordIndex]; //ret = cache[x][y][wordIndex]

	if (ret != -1) { // 이미 캐시에 결과가 계산되어있으면 그 값을 활용한다.
		return ret;
	}

	if (word.at(wordIndex) != board[x][y]) {
		return ret = 0;
	}
	//여기까지 왔단 얘기는 그 단어랑 board에 있는 단어가 일치한다는 의미이므로 다음 단어를 찾기위해 wordIndex를 증가시킨다
	wordIndex++;
	if (wordIndex == word.size())
		return ret = 1;

	return ret = (hasWord(x - 1, y - 1, wordIndex) || hasWord(x - 1, y, wordIndex) || hasWord(x - 1, y + 1, wordIndex) || hasWord(x, y - 1, wordIndex) || hasWord(x, y + 1, wordIndex) || hasWord(x + 1, y - 1, wordIndex) || hasWord(x + 1, y, wordIndex) || hasWord(x + 1, y + 1, wordIndex));

}
