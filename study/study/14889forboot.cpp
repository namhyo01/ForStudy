#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <math.h>
/*
using namespace std;
int N;
int team[21][21];
int min_ability = 99999999;
bool pairteam[21];

void maketeam(int first, int count) {
	if (count == N / 2) {
		int ateam = 0;
		int bteam = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i+1; j < N; j++) {
				if (pairteam[i]&&pairteam[j]) {
					ateam += team[i][j];
					ateam += team[j][i];
				}
				else if(!pairteam[i]&&!pairteam[j]){
					bteam += team[i][j];
					bteam += team[j][i];
				}
			}
				
		}
		min_ability = min_ability > abs(ateam - bteam) ? abs(ateam - bteam) : min_ability;
		return;
	}
	for (int i = first; i < N; i++) {
		if (!pairteam[i]) {

			pairteam[i] = true;
			maketeam(i + 1, count + 1);
			pairteam[i] = false;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> team[i][j];
		}
	}
	maketeam(0, 0);
	cout << min_ability << endl;
	system("pause");
	return 0;
}*/