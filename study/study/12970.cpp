//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N, K;
//string S;
//bool flag;
//void dfs()
//{
//	if (K > (N / 2) * (N / 2 + N % 2)) {
//		cout << -1 << endl;
//	}
//	else if (K == 0) {
//		cout << 'B';
//		for (int i = 0; i < N - 1; i++) cout << 'A';
//		cout << endl;
//	}
//	else {
//		for (int i = 0, j = 1, sum = 0; i < N; i++) {
//			if (N - j - i > 0 && sum + N - j - i <= K) {
//				cout << 'A';
//				sum += N - j++ - i;
//			}
//			else
//				cout << 'B';
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> K;
//	char ch[51];
//	dfs();
//
//	system("pause");
//	return 0;
//}