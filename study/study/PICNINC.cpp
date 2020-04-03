// 알고스팟 PICNIC문제
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
int n, m;

bool areFriends[10][10]; // 이 변수는 누구랑 누구가 친구인지 나타낸다.
bool hasFriend[10]; // 이 변수는 이 번호의 학생이 짝이 정해졌는지를 나타낸다.

int ret = 0;

void countPairings();

/*int main() {

	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		ret = 0;
		memset(areFriends, false, sizeof(areFriends));
		memset(hasFriend, false, sizeof(hasFriend));
		cin >> n >> m;
		for (int j = 0; j < m; j++) {
			int a, b;
			cin >> a >> b;
			areFriends[a][b] = true;
			areFriends[b][a] = true; // 역도 똑같이 친구이다.
		}
		countPairings();
		cout << ret << endl;
	}
	system("pause");
}*/

void countPairings() {
	int first=-1;
	bool finish = true;
	for (int i = 0; i < n; i++) {
		if (!hasFriend[i]) { // 즉 아직 짝이 안된 학생이 있다면
			first = i; // 오름차순으로 정렬
			break;
		}
	}
	if (first == -1) {
		ret += 1;
		return;
	}
	for (int i = first+1; i < n; i++) {
		if (!hasFriend[i] && !hasFriend[first] && areFriends[first][i]) {// 즉 얘네가 친구인데 아직 짝이 없으면
			hasFriend[i] = true;
			hasFriend[first] = true;
			countPairings();
			hasFriend[i] = false;
			hasFriend[first] = false; // 이렇게 하면 다시 경우의수를 샐수있다.,
		}
	}
	return;
}