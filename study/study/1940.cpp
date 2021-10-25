//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N, M;
//int jeryo[15002];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) cin >> jeryo[i];
//	sort(jeryo, jeryo + N);
//	int start = 0;
//	int finish = N - 1;
//	int cnt = 0;
//	while (start < finish) {
//		int armor = jeryo[start] + jeryo[finish];
//		if (armor == M)
//		{
//			cnt++;
//			start++;
//			finish--;
//		}
//		else if (armor > M) {
//			finish--;
//		}
//		else
//			start++;
//	}
//	cout << cnt << endl;
//	system("pause");
//	return 0;
//}