// BOARDCOVER 게임판 덮기 알고스팟 문제

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
//주어진 칸을 덮을 수 있는 모든 경우의 수
// 우리는 항상 주어진 칸의 맨 왼쪽중에서 맨 윗부터 채우면 된다.
const int coverType[4][3][2] = { //(y,x)모양
	{{0,0},{1,0},{0,1}},
	{{0,0},{0,1},{1,1}},
	{{0,0},{1,0},{1,1}},
	{{0,0},{1,0},{1,-1}}
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
