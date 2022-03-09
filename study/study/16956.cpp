//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl "\n"
//
//int R, C;
//char arr[501][501];
//int dy[] = { 0,0,1,-1 };
//int dx[] = { 1,-1,0,0 };
//bool flag = false;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> R >> C;
//	queue<pair<int, int> > pq;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 'W') {
//				pq.push(make_pair(i, j));
//			}
//		}
//	}
//	
//	while (!pq.empty()) {
//		int x = pq.front().second;
//		int y = pq.front().first;
//		pq.pop();
//		for (int i = 0; i < 4; i++) {
//			int newx = x + dx[i];
//			int newy = y + dy[i];
//			if (newx < 0 || newy < 0 || newx >= C || newy >= R) {
//				continue;
//			}
//			if (arr[newy][newx] == '.')
//				arr[newy][newx] = 'D';
//			if (arr[newy][newx] == 'S')
//			{
//				cout << 0 << endl;
//				return 0;
//			}
//		}
//	}
//	cout << 1 << endl;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++)
//			cout << arr[i][j];
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}