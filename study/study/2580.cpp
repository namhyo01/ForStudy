#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int sudoku[9][9];
bool row[9][10]; // 행
bool col[9][10];//열
bool square[9][10];//3*3박스

int squarebox(int y, int x) {
	return (y / 3) * 3 + (x / 3);
}

void dfs(int cnt) {
	if (cnt == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				printf("%d ", sudoku[i][j]);
			}
			printf("\n");
		}
		system("pause");
		exit(0);
	}
	int y = cnt / 9;
	int x = cnt % 9;
	if (sudoku[y][x] != 0) {
		dfs(cnt + 1);
	}
	else {
		for (int i = 1; i <= 9; i++) {
			if (!col[x][i] && !row[y][i] && !square[squarebox(y, x)][i]) {
				col[x][i] = true;
				row[y][i] = true;
				square[squarebox(y, x)][i] = true;
				sudoku[y][x] = i;
				dfs(cnt + 1);
				//아닐경우
				sudoku[y][x] = 0;
				col[x][i] = false;
				row[y][i] = false;
				square[squarebox(y, x)][i] = false;
			}
		}
	}
}

int main() {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &sudoku[i][j]);
			row[i][sudoku[i][j]] = true;
			col[j][sudoku[i][j]] = true;
			square[squarebox(i, j)][sudoku[i][j]] = true;
		}
	}
	//printf("hu");
	dfs(0);
	system("pause");
	return 0;
}*/