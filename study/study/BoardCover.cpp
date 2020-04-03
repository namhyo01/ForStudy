// BOARDCOVER ������ ���� �˰����� ����

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
//�־��� ĭ�� ���� �� �ִ� ��� ����� ��
// �츮�� �׻� �־��� ĭ�� �� �����߿��� �� ������ ä��� �ȴ�.
const int coverType[4][3][2] = { //(y,x)��� // const�� ���ȭ�� ���� ���� �Ұ��� ����
	{{0,0},{1,0},{0,1}},
	{{0,0},{0,1},{1,1}},
	{{0,0},{1,0},{1,1}},
	{{0,0},{1,0},{1,-1}}
};
// board�� (y,x)�� type�� ������� ���ų� ������ ������ ���ش�
// delta = 1�̸� ����, -1�̸� ���ش�

bool set(vector<vector<int> > & board, int y, int x, int type, int delta) {
	bool ok = true;
	for (int i = 0; i < 3; i++) {
		const int ny = y + coverType[type][i][0];
		const int nx = x + coverType[type][i][1];
		if (ny < 0 || ny >= board.size() || nx < 0 || nx >= board.size()) {
			return ok = false;
		}
		else if ((board[ny][nx] += delta) > 1) { // �ߺ� ����
			return ok = false;
		}
	}
	return ok;
}
// board�� ��� ������ �� ���� ����� ��
// board�� 1�̸� �̹� ���ΰ� �ƴϸ� �ȵ��ΰ�
int cover(vector<vector<int> >& board)
{
	//���� ä���� ���� ĭ��, ���� ���� ���ʿ� �ִ� ���� ���� ���̴�.
	int y = -1, x = -1;
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
			if (board[i][j] == 0) {
				y = i;
				x = j;
				break;

			}
		}
		if (y != -1) break;
	}
	//��� ĭ�� ä������ 1�� ��ȯ
	if (y == -1) return 1;
	int ret = 0;
	for (int type = 0; type < 4; type++) {
		if (set(board, y, x, type, 1)) {
			ret += cover(board);

		}
	}


}
int H, W;
int main() {
	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> H >> W;
		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W; k++) {

			}
		}
	}

	return 0;
}