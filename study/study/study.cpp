// ���� ȸ���ʹ� ����

/*#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

int N, D, K, C;
int ans = 0;

int sushi[30000 + 3000 + 3000]; // �ʹ��� ������ ����
int cur_cnt[3000 + 300 + 30 + 3]; // k�� �ȿ� ���� ������ �ʹ��� ����� ī��Ʈ
int cur_ans;

/*int main()
{
	scanf("%d %d %d %d", &N, &D, &K, &C);
	for (int n = 0; n < N; n++)
		scanf("%d", &sushi[n]);
	cur_cnt[C]++; // ���� ������ ������ ������ ����
	ans++;
	for (int i = 0; i < K; i++) {
		if (cur_cnt[sushi[i]] == 0) ans++;
		cur_cnt[sushi[i]]++; // �Ծ����� ī��Ʈ

		sushi[N + i] = sushi[i]; // ȸ���ʹ��̴� �������� �̷�����ִ�.

	}

	for (int i = K; i < N + K; i++) {
		cur_ans = max(ans, cur_ans);
		if (cur_cnt[sushi[i]] == 0) ans++;
		cur_cnt[sushi[i]]++;

		if (cur_cnt[sushi[i - K]] == 1) ans--; // ��ó���ź��� ���� ���� 1�̸� ans�� ���ŵǸ鼭 ������ ������ �޶����� ��Ÿ����
		cur_cnt[sushi[i - K]]--;
	}

	cout << cur_ans << endl;
	return 0;
}*/