//알고스팟 시계맞추기문제
/*#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

const int SWITCH = 10;
const int INF = 9999;
const int CLOCKS = 16;
bool twelve = false;
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
bool areAligned(const vector<int>&clocks) {
	for (int i = 0; i < clocks.size(); i++)
	{
		if (clocks[i] != 12)
			return false; 
	}
	return true;
}

void push(vector <int> & clocks, int swtch) {
	//x인것을 누르면 그것은 3이 증가한다.
	for (int i = 0; i < 16; i++) {
		if (linked[swtch][i] == 'x') {
			clocks[i] += 3;
			if (clocks[i] > 12) clocks[i] -= 12;

		}
	}

}

int solve(vector<int> & clocks, int swtch) {
	if (swtch == SWITCH) {
		if (areAligned(clocks)) {
			twelve = true;
			return 0;
		}

		return INF;
		//return areAligned(clocks) ? 0 : INF;
	} 
	int ret = INF;
	for (int i = 0; i < 4; i++) {
		ret = min(ret, i + solve(clocks, swtch + 1));
		push(clocks, swtch);
	}
	//같은것을 4번 돌리면 원래대로 돌아온다.(시계이니깐)

	return ret;
}

int main() {

	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		vector <int> clocks(16);
		twelve = false;
		for (int j = 0; j < 16; j++) {
			cin >> clocks[j];
		}
		int answer = solve(clocks, 0);
		if (!twelve) {
			cout << -1 << endl;
		}
		else {
			cout << answer << endl;
		}
	}

	system("pause");
	return 0;
}*/