//#include <bits/stdc++.h>
//
//using namespace std;
//int N;
//int paper[1002][1002];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	for (int k = 0; k < N;k++) {
//		int row, col, width, height;
//		cin >> row >> col >> width >> height;
//		for (int i = 0; i < width; i++) {
//			for (int j = 0; j < height; j++) {
//				paper[row + i][col + j] = k+1;
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		int cnt = 0;
//		for (int j = 0; j < 101; j++) {
//			for (int k = 0; k < 101; k++) {
//				if (paper[j][k] == i + 1) {
//					cnt++;
//				}
//			}
//		}
//		cout << cnt << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}