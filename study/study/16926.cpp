//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//int N, M, R;
//int arr[301][301];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> R;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//			cin >> arr[i][j];
//	}
//
//	while (R--) {
//		int x1 = 0, y1 = 0;
//		int x2 = N - 1, y2 = 0;
//		int x3 = N - 1, y3 = M - 1;
//		int x4 = 0, y4 = M - 1;
//
//		while ((x1 < x2) && (y1 < y4)) {
//			int temp = arr[x2][y2];
//			for (int i = x2; i > x1; i--)
//				arr[i][y2] = arr[i - 1][y2];
//			for (int i = y1; i < y4; i++) 
//				arr[x1][i] = arr[x1][i + 1];
//			for (int i = x4; i < x3; i++) 
//				arr[i][y4] = arr[i + 1][y4];
//			for (int i = y3; i > y2; i--) {
//				arr[x3][i] = arr[x3][i - 1];
//			}
//			arr[x2][y2 + 1] = temp;
//			x1++, y1++;
//			x2--, y2++;
//			x3--, y3--;
//			x4++, y4--;
//		}
//
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//			cout << arr[i][j] << " ";
//		cout << "\n";
//	}
//	system("pause");
//	return 0;
//}