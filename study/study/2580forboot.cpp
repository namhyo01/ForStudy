#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;
/*
bool row[9][10];//행
bool col[9][10];//열
bool square[9][10]; // 3*3박스
int sudoku[9][9];

int squarebox(int y, int x) {
	return y / 3 * 3 + x / 3;
}

void fill_square(int cnt) {
	if (cnt == 81) {//다 확인함
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << sudoku[i][j] << " ";
			}
			cout << endl;
		}
		return;
	}
	int y = cnt / 9;
	int x = cnt % 9;
	if (sudoku[y][x]!=0) {
		fill_square(cnt + 1);
	}
	for (int i = 1; i <= 9; i++) {
		if (!row[y][i] && !col[x][i] && !square[squarebox(y, x)][i]) { //3개가 동시에 없는 경우
			row[y][i] = true;
			col[x][i] = true;
			square[squarebox(y, x)][i] = true;
			sudoku[y][x] = i;
			fill_square(cnt + 1);
			row[y][i] = false;
			col[x][i] = false;
			square[squarebox(y, x)][i] = false;
			sudoku[y][x] = 0;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> sudoku[i][j];
			row[i][sudoku[i][j]] = true;
			col[j][sudoku[i][j]] = true;
			square[squarebox(i,j)][sudoku[i][j]] = true;
		}
	}
	fill_square(0);
	system("pause");
	return 0;
}*/
/*
int team[21][21];
bool startteam[21];
int N;
int min_ability = 999999;
void conduct_min(int first, int cnt) {
	
	if (cnt == N / 2) {
		int ateam = 0;
		int bteam = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if (startteam[i]&&startteam[j]) {
					ateam += team[i][j];
					ateam += team[j][i];
				}
				else if (!startteam[i] && !startteam[j]) {
					bteam += team[i][j];
					bteam += team[j][i];
				}
			}
		}
		min_ability = min_ability > abs(ateam - bteam) ? abs(ateam - bteam) : min_ability;
		return;
	}
	for (int i = first; i < N; i++) {
		if (!startteam[i]) {
			startteam[i] = true;
			conduct_min(i + 1, cnt + 1);
			startteam[i] = false;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> team[i][j];
	}
	conduct_min(0, 0);
	cout << min_ability << endl;
	system("pause");
	return 0;
}*/