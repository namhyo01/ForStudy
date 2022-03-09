//#include <bits/stdc++.h>
//using namespace std;
//
//
//bool ans[5001];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	for (int i = 1; i <= 5000; i++) {
//		unordered_map<int, int> num;
//		bool flag = false;
//		int j = i;
//		while (j != 0) {
//			num[j % 10]++;
//			if (num[j % 10] > 1) {
//				flag = true;
//				break;
//			}
//			j /= 10;
//		}
//		if (!flag) {
//			ans[i] = true;
//		}
//	}
//	int N, M;
//	int cnt = 0;
//	while (cin >> N >> M) {
//		cnt = 0;
//		for (int i = N; i <= M; i++)
//		{
//			if (ans[i])
//				cnt++;
//
//		}
//		cout << cnt << endl;
//	}
//	system("pause");
//	return 0;
//}