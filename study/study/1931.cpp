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
		return a.start < b.start; // ������ �ð��� ���ٸ� ���� ������ ���� ������
	}
	else {
		return a.end < b.end;// ���� �ʴٸ�, ���� �ð��� ���� ������ ����
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