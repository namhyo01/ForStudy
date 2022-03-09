//#include <bits/stdc++.h>
//
//using namespace std;
//char map1[21][21];
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int K;
//	cin >> K;
//	string amho;
//	cin >> amho;
//	int row = 0;
//	int col = 0;
//	int length = 0;
//	bool left = true;
//	while (length < amho.size()) {
//		if (left) {
//			//¿Þ->¿À
//			for (int i = 0; i < K; i++) {
//				map1[row][col] = amho[length];
//				length++;
//				col++;
//			}
//			row++;
//			col--;
//			left = !left;
//		}
//		else {
//			for (int i = 0; i < K; i++) {
//				map1[row][col] = amho[length];
//				length++;
//				col--;
//			}
//			col++;
//			row++;
//			left = !left;
//		}
//	}
//	for (int i = 0; i <  K; i++) {
//		for (int j = 0; j <amho.size() / K; j++) {
//			cout << map1[j][i];
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}