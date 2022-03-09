//#include <bits/stdc++.h>
//
//using namespace std;
//
//int map1[101][101];
//
//int N, M;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//
//	
//	for (int k = 0; k < N; k++) {
//		int x1, x2, y1, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		for (int x = x1; x <= x2; x++) {
//			for (int y = y1; y <= y2; y++) {
//				map1[x][y]++;
//			}
//		}
//	}
//	int cnt = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		for (int j = 1; j <= 100; j++) {
//			if (map1[i][j] > M) {
//				cnt++;
//			}
//		}
//	}
//	cout << cnt << endl;
//
//	system("pause");
//	return 0;
//}