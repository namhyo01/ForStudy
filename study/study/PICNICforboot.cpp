#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;
/*
bool friends[11][11];
bool hasfriend[11];
int n, m;
int count_pair;
*/
/*void count_friends() {
	int first = -1;
	//���� �����Ű��� => ��������
	for (int i = 0; i < n; i++)
	{
		if (!hasfriend[i]) { // ���� ¦�� ���� ���� ó����
			first = i;
			break;
		}
	}
	if (first == -1) {
		count_pair++;
		return;
	}
	for (int i = first+1; i < n; i++) {
		if (!hasfriend[i] && friends[first][i]&&!hasfriend[first]) {
			hasfriend[i] = true;
			hasfriend[first] = true;
			count_friends();
			hasfriend[i] = false;
			hasfriend[first] = false;
		}
	}
	
}
*/
/*

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int C;
	
	cin >> C;
	while (C--) {
		memset(friends, false, sizeof(friends));
		memset(hasfriend, false, sizeof(hasfriend));
		count_pair = 0;
		cin >> n >> m;
		for (int i = 0; i < m; i++) { // ģ�� ¦ �Է�
			int a, b;
			cin >> a >> b;
			friends[a][b] = true;
			friends[b][a] = true;

		}
		count_friends(0);
		cout << count_pair << endl;

	}
	system("pause");
	return 0;
}*/