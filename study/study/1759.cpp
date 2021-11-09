//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//int L, C;
//char alpha[16];
//char moum[8] = { 'a','e','i','o','u' };
//char answer[16];
//void dfs(int start, int cnt) {
//	if (cnt == L) {
//		int moum_cnt = 0;
//		for (int i = 0; i < L; i++) {
//			if (answer[i] == 'a' || answer[i] == 'e' || answer[i] == 'i' || answer[i] == 'o' || answer[i] == 'u') {
//				moum_cnt++;
//			}
//		}
//		if (moum_cnt >= 1 && (L - moum_cnt) >= 2) {
//			cout << answer << endl;
//			return;
//		}
//		return;
//	}
//	for (int i = start; i < C; i++) {
//		answer[cnt] = alpha[i];
//		dfs(i + 1, cnt + 1);
//	}
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> L >> C;
//	for (int i = 0; i < C; i++) cin >> alpha[i];
//	sort(alpha, alpha + C);
//	dfs(0, 0);
//
//	system("pause");
//	return 0;
//}