// �˰��� PICNIC����
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
int n, m;

bool areFriends[10][10]; // �� ������ ������ ������ ģ������ ��Ÿ����.
bool hasFriend[10]; // �� ������ �� ��ȣ�� �л��� ¦�� ������������ ��Ÿ����.

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
			areFriends[b][a] = true; // ���� �Ȱ��� ģ���̴�.
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
		if (!hasFriend[i]) { // �� ���� ¦�� �ȵ� �л��� �ִٸ�
			first = i; // ������������ ����
			break;
		}
	}
	if (first == -1) {
		ret += 1;
		return;
	}
	for (int i = first+1; i < n; i++) {
		if (!hasFriend[i] && !hasFriend[first] && areFriends[first][i]) {// �� ��װ� ģ���ε� ���� ¦�� ������
			hasFriend[i] = true;
			hasFriend[first] = true;
			countPairings();
			hasFriend[i] = false;
			hasFriend[first] = false; // �̷��� �ϸ� �ٽ� ����Ǽ��� �����ִ�.,
		}
	}
	return;
}