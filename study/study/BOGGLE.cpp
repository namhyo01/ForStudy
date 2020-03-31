// �˰��� ���� ����

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;

char board[5][5]; //board ��
int cache[5][5][10]; // ������� ����. memset���� -1�� �ʱ�ȭ 1�� ����, 0�� ����
string word;



int hasWord(int x, int y, int wordIndex);

/*int main()
{
	int C;
	int num = 0;
	cin >> C;
	for (int k = 0; k < C; k++) {
		for (int j = 0; j < 5; j++)
			cin >> board[j][0] >> board[j][1] >> board[j][2] >> board[j][3] >> board[j][4]; // ���� �Է�


		int N;
		scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			bool IsTrue = false;
			memset(cache, -1, sizeof(cache)); // �� �ܾ �������� cache�� -1�� �ʱ�ȭ
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

	if (ret != -1) { // �̹� ĳ�ÿ� ����� ���Ǿ������� �� ���� Ȱ���Ѵ�.
		return ret;
	}

	if (word.at(wordIndex) != board[x][y]) {
		return ret = 0;
	}
	//������� �Դ� ���� �� �ܾ�� board�� �ִ� �ܾ ��ġ�Ѵٴ� �ǹ��̹Ƿ� ���� �ܾ ã������ wordIndex�� ������Ų��
	wordIndex++;
	if (wordIndex == word.size())
		return ret = 1;

	return ret = (hasWord(x - 1, y - 1, wordIndex) || hasWord(x - 1, y, wordIndex) || hasWord(x - 1, y + 1, wordIndex) || hasWord(x, y - 1, wordIndex) || hasWord(x, y + 1, wordIndex) || hasWord(x + 1, y - 1, wordIndex) || hasWord(x + 1, y, wordIndex) || hasWord(x + 1, y + 1, wordIndex));

}
