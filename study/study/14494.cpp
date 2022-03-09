//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int dx[] = {-1,-1,-1,0,0,1,1,1};
//int dy[] = {-1,0,1,-1,1,-1,0,1};
//
//int N, M, K;
//int A[11][11];  //추가
//int arr[11][11]; //비료
//int ans;
//vector<int> age[11][11];
//void Spring() {
//
//}
//
//void Summer() {
//
//}
//
//void fall() {
//
//}
//
//void winter() {
//	// 비료 추가
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			arr[i][j] += A[i][j]; 
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> K;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> A[i][j];
//			arr[i][j] = 5;
//		}
//	}
//	for (int i = 0; i < M; i++) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		age[x][y] = z;
//	}
//
//	system("pause");
//	return 0;
//}