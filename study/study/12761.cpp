//#include <bits/stdc++.h>
//using namespace std;
//
//bool visit[100001];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	queue<pair<int, int>> pq; //À§Ä¡, cnt
//	int A, B, N, M;
//	cin >> A >> B >> N >> M;
//	pq.push(make_pair(N,0));
//	while (!pq.empty())
//	{
//		int cur = pq.front().first;
//		int cnt = pq.front().second;
//		pq.pop();
//		if (cur == M) {
//			cout << cnt<<endl;
//			system("pause");
//			return 0;
//		}
//		int dx[] = { cur + 1,cur - 1,cur + A,cur - A,cur + B,cur - B,cur*A,cur*B };
//		for (int i = 0; i < 8; i++) {
//			if (dx[i] >= 0 && dx[i] <= 100000 && !visit[dx[i]]) {
//				visit[dx[i]] = true;
//				pq.push(make_pair(dx[i], cnt + 1));
//			}
//		}
//	}
//
//
//	system("pause");
//	return  0;
//}