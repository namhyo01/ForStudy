//#include <bits/stdc++.h>
//
//using namespace std;
//int n;
//int S[14];
//bool visit[50];
//void rotto(int start, int size) {
//	if (6 == size) {
//		for (int i = 1; i < 50; i++) {
//			if (visit[i])
//				cout << i << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = start; i < n; i++) {
//		visit[S[i]] = true;
//		rotto(i + 1, size + 1);
//		visit[S[i]] = false;
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	while (1) {
//		memset(S, 0, sizeof(S));
//		memset(visit, false, sizeof(visit));
//		cin >> n;
//		if (n == 0) break;
//		for (int i = 0; i < n; i++) {
//			cin >> S[i];
//		}
//		rotto(0, 0);
//	}
//
//
//	system("pause");
//	return 0;
//}