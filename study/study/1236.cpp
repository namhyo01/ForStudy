//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N, M;
//char castle[51][51];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	vector<bool> check_row(N,false);
//	vector<bool>check_col(M,false);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> castle[i][j];
//			if (castle[i][j] == 'X') {
//				check_row[i] = true;
//				check_col[j] = true;
//			}
//		}
//	}
//	int cnt1 = 0;
//	int cnt2 = 0;
//	for (int i = 0; i < N; i++)
//		if (!check_row[i])
//			cnt1++;
//	for (int i = 0; i < M; i++)
//		if (!check_col[i])
//			cnt2++;
//	cout << max(cnt1, cnt2) << endl;
//
//
//	system("pause");
//	return 0;
//
//}