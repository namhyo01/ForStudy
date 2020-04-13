#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
/*
const int SWITCH = 10;
const int INF = 9999999;
const int CLOCKS = 16;

const char linked[SWITCH][CLOCKS + 1] = {
	//x면 연결 .이면 비연결
	"xxx.............",
	"...x...x.x.x....",
	"....x.....x...xx",
	"x...xxxx........",
	"......xxx.x.x...",
	"x.x...........xx",
	"...x..........xx",
	"....xx.x......xx",
	".xxxxx..........",
	"...xxx...x...x.."
};

bool areALigned(vector <int> &clocks) {
	for (int i = 0; i < clocks.size(); i++) {
		if (clocks[i] != 12)
			return false;
	}
	return true;
}


void push(vector<int>&clocks, int swtch) {
	for (int i = 0; i < CLOCKS; i++) {
		if (linked[swtch][i] == 'x') {
			clocks[i] += 3;
			if (clocks[i] == 15)
				clocks[i] = 3;
		}

	}
}

int solve(vector<int>&clocks, int swtch){
	if (swtch == SWITCH)
		return areALigned(clocks);
	int ret = INF;
	for (int i = 0; i < 4; i++) {
		ret = min(ret, i + solve(clocks, swtch+1));
		push(clocks, swtch);
	}
	return ret;
}

int main() {
	int C;
	cin >> C;




	system("pause");
	return 0;
}*/