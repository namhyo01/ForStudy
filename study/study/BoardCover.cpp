// BOARDCOVER ������ ���� �˰��� ����

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
//�־��� ĭ�� ���� �� �ִ� ��� ����� ��
// �츮�� �׻� �־��� ĭ�� �� �����߿��� �� ������ ä��� �ȴ�.
const int coverType[4][3][2] = { //(y,x)���
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
