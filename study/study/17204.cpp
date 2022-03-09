//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl "\n"
//
//
//int N, K;
//int choose[151];
//bool check[151];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int ans = 0;
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		int temp;
//		cin >> temp;
//		choose[i] = temp;
//	}
//	int start = 0;
//	while (1) {
//		check[start] = true;
//		start = choose[start];
//		ans++;
//		if (check[start]) {
//			cout << -1 << endl;
//			break;
//		}
//		if (start == K)
//		{
//			cout << ans << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}