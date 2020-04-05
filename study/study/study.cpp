// 백준 회전초밥 문제

/*#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

int N, D, K, C;
int ans = 0;

int sushi[30000 + 3000 + 3000]; // 초밥의 정보를 담음
int cur_cnt[3000 + 300 + 30 + 3]; // k개 안에 같은 종류의 초밥이 몇개인지 카운트
int cur_ans;

/*int main()
{
	scanf("%d %d %d %d", &N, &D, &K, &C);
	for (int n = 0; n < N; n++)
		scanf("%d", &sushi[n]);
	cur_cnt[C]++; // 차피 쿠폰은 무조건 먹으니 포함
	ans++;
	for (int i = 0; i < K; i++) {
		if (cur_cnt[sushi[i]] == 0) ans++;
		cur_cnt[sushi[i]]++; // 먹었으니 카운트

		sushi[N + i] = sushi[i]; // 회전초밥이니 원형으로 이루어져있다.

	}

	for (int i = K; i < N + K; i++) {
		cur_ans = max(ans, cur_ans);
		if (cur_cnt[sushi[i]] == 0) ans++;
		cur_cnt[sushi[i]]++;

		if (cur_cnt[sushi[i - K]] == 1) ans--; // 맨처음거부터 제거 만약 1이면 ans가 제거되면서 접시의 종류가 달라짐을 나타낸다
		cur_cnt[sushi[i - K]]--;
	}

	cout << cur_ans << endl;
	return 0;
}*/