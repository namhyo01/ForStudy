//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int dx[] = { -2,-2,0,0,2,2 };
//int dy[] = { -1,1,-2,2,-1,1 };
//
//int N,r1,r2,c1,c2;
//bool check[201][201];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	cin >> r1 >> c1 >> r2 >> c2;
//	//int cnt = 0;
//	queue<pair<pair<int, int>,int>> pq;
//	pq.push(make_pair(make_pair(r1, c1),0));
//	check[r1][c1] = true;
//	while (!pq.empty()) {
//		int r = pq.front().first.first;
//		int c = pq.front().first.second;
//		int cnt = pq.front().second;
//		pq.pop();
//		if (r == r2&&c == c2) {
//			cout << cnt << endl;
//			system("pause");
//			return 0;
//		}
//		for (int i = 0; i < 6; i++) {
//			int nr = r + dx[i];
//			int nc = c + dy[i];
//			if (nr < 0 || nc < 0 || nr >= N || nc >= N)continue;
//			if (!check[nr][nc]) {
//				check[nr][nc] = true;
//				pq.push(make_pair(make_pair(nr, nc),cnt+1));
//			}
//		}
//		cnt++;
//	}
//	cout << -1<< endl;
//	system("pause");
//	return 0;
//}