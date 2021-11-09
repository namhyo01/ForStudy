//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N, K;
//int INF = INT_MAX;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> K;
//	int dis[101][101];
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			dis[i][j] = 1000;
//	for (int i = 0; i < K; i++) {
//		int a, b;
//		cin >> a >> b;
//		dis[i][i] = 0;
//		dis[a-1][b-1] = 1;
//		dis[b-1][a-1] = 1;
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (dis[i][k] + dis[k][j] < dis[i][j]) {
//					dis[i][j] = dis[i][k] + dis[k][j];
//					//cout << i << " " << j << " " << dis[i][j] << endl;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//		{
//			if (dis[i][j] > 6)
//			{
//				cout << "Big World!" << endl;
//
//				system("pause");
//				return 0;
//			}
//		}
//	}
//	cout << "Small World" << endl;
//	system("pause");
//	return 0;
//}