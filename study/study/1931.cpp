#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
#pragma warning(disable:4996)
/*
struct Time {
	int start;
	int end;
};

bool cmp(Time a, Time b) {
	if (a.end == b.end) {
		return a.start < b.start; // 끝나는 시간이 같다면 시작 순서가 빠른 순으로
	}
	else {
		return a.end < b.end;// 같지 않다면, 종료 시간이 빠른 순으로 정렬
	}
}

int main() {
	int N;
	scanf("%d", &N);
	vector<Time> table(N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &table[i].start, &table[i].end);
	}
	sort(table.begin(), table.end(), cmp);
	int count = 0;
	int time = 0;
	for (int i = 0; i < table.size(); i++) {
		if (time <= table[i].start) {
			time = table[i].end;
			count++;
		}
	}
	printf("%d\n", count);

	system("pause");
	return 0;
}

*/