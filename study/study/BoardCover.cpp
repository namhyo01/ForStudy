// BOARDCOVER 게임판 덮기 알고스팟 문제

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
//주어진 칸을 덮을 수 있는 모든 경우의 수
// 우리는 항상 주어진 칸의 맨 왼쪽중에서 맨 윗부터 채우면 된다.
const int coverType[4][3][2] = { //(y,x)모양 // const로 상수화를 시켜 수정 불가능 생성
	{{0,0},{1,0},{0,1}},
	{{0,0},{0,1},{1,1}},
	{{0,0},{1,0},{1,1}},
	{{0,0},{1,0},{1,-1}}
};
// board의 (y,x)를 type번 방법으로 덮거나 덮었던 블록을 없앤다
// delta = 1이면 덮고, -1이면 없앤다

bool set(vector<vector<int> > & board, int y, int x, int type, int delta) {
	bool ok = true;
	for (int i = 0; i < 3; i++) {
		const int ny = y + coverType[type][i][0];
		const int nx = x + coverType[type][i][1];
		if (ny < 0 || ny >= board.size() || nx < 0 || nx >= board[0].size()) {
			ok = false;
		}
		else if ((board[ny][nx] += delta) > 1) { // 중복 적용
			ok = false;
		}
	}
	return ok;
}
// board의 모든 블럭을 다 감쌀 경우의 수
// board가 1이면 이미 덮인것 아니면 안덮인것
int cover(vector<vector<int> >& board)
{
	//아직 채우지 않은 칸중, 가장 위고 왼쪽에 있는 것을 고를 것이다.
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
	//모든 칸을 채웠으면 1을 반환
	//cout << y << x << endl;
	if (y == -1) return 1;
	int ret = 0;
	for (int type = 0; type < 4; type++) {
		if (set(board, y, x, type, 1)) {
			ret += cover(board);
		}
		set(board, y, x, type, -1); // 해제
		
	}

	return ret;
}
int H, W;
int cnt = 0; // 흰거 몇개인지 셈

/*int main() {
	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> H >> W;
		vector<vector<int> > board(H, vector<int>(W,0));
		cnt = 0;
		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W; k++) {
				char kan;
				cin >> kan;
				if (kan == '#') {
					board[j][k] = 1;
				}
				else {
					board[j][k] = 0;
					cnt++;
				}
			}
		}
		if (cnt % 3 != 0)
			cout << 0 << endl;
		else
			cout<<cover(board)<<endl;

	}
	system("pause");
	return 0;
}*/
