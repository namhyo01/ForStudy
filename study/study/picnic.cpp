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
bool arefriends[10][10]; // �� ���� ģ������ Ȯ���ؾ߸� �Ѵ�

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
		if (arefriends[finished][pairWith] && !taken[pairWith]) // ģ�����̰ų� �̹� ¦ ���������� �ʴٴ� ������
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
			//�����ϴٸ� a�� b�� ��ġ�� ũ�� ������� �Ѱ��̴�.

			arefriends[a][b] = true; //�� ���� ģ���̴�
			arefriends[b][a] = true; //���� ģ���̴�

		}

		printf("%d\n", countpairs(taken));


	}
	system("pause");

	return 0;
}*/