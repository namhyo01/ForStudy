#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
/*
using namespace std;
int students;
int pairs;
bool arefriends[10][10]; // 이 둘이 친구인지 확인해야만 한다

int countpairs(bool taken[10]) {
	int finished = -1;
	for (int i = 0; i < students; i++) {
		if (!taken[i]) {
			finished = i;
			break;
		}
	}

	if (finished == -1)
		return 1;
	int ret = 0;
	for (int pairWith = finished + 1; pairWith < students; pairWith++) {
		if (arefriends[finished][pairWith] && !taken[pairWith]) // 친구사이거나 이미 짝 지어져있지 않다는 가정하
		{
			//printf("%d %d \n", finished, pairWith);
			taken[finished] = taken[pairWith] = true;
			ret += countpairs(taken);
			taken[finished] = taken[pairWith] = false;

		}
	}
	
	return ret;

}

int main() {
	int C;
	cin >> C;
	
	for (int i = 0; i < C; i++) {
		bool taken[10] = { false, };
		memset(arefriends, false, sizeof(arefriends));
		scanf("%d %d", &students, &pairs);
		for (int j = 0; j < pairs; j++) {
			int a, b;
			scanf("%d %d", &a, &b);
			//가능하다면 a랑 b의 위치를 크기 순서대로 둘것이다.

			arefriends[a][b] = true; //이 둘은 친구이다
			arefriends[b][a] = true; //역도 친구이다

		}

		printf("%d\n", countpairs(taken));


	}
	system("pause");

	return 0;
}*/