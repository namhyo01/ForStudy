//#include <bits/stdc++.h>
//
//using namespace std;
//
//int cards[101][101];
//int person[101];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		int card[101];
//		for (int j = 0; j < M; j++) {
//			cin >> card[j];
//		}
//		sort(card, card + M,greater<>());
//		for (int j = 0; j < M; j++) {
//			cards[i][j] = card[j];
//		}
//		
//	}
//	int temp = 0;
//	for (int j = 0; j < N; j++) {
//		int max_cnt = -1;
//		for (int i = 0; i < N; i++) {
//			max_cnt= max(cards[i][j],max_cnt);
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (cards[i][j] == max_cnt) {
//				person[i]++;
//			}
//		}
//
//	}
//	int max_cnt = -1;
//	for (int i = 0; i < N; i++)
//	{
//		max_cnt = max(max_cnt, person[i]);
//	}
//	for (int i = 0; i < N; i++) {
//		if (max_cnt == person[i]) {
//			cout << i + 1 << " ";
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}