//#include <bits/stdc++.h>
//
//using namespace std;
//bool check[100002];
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n;
//	cin >> n;
//	int s;
//	int Ai[100002];
//	for (int i = 1; i <= n; i++)cin >> Ai[i];
//	cin >> s;
//	int count_stone = 1;
//	queue<pair<int, int> > pq;
//	pq.push(make_pair(s, 0));
//	check[s] = true;
//
//	while (!pq.empty()) {
//		int x = pq.front().first;
//		int cnt = pq.front().second;
//		int dx1 = x + Ai[x];
//		int dx2 = x - Ai[x];
//		pq.pop();
//		if (dx1 > 0 && dx1 <= n) {
//			if (!check[dx1])
//			{
//				pq.push(make_pair(dx1, ++cnt));
//				check[dx1] = true;
//				count_stone++;
//			}
//		}
//		if (dx2 > 0 && dx2 <= n) {
//			if (!check[dx2])
//			{
//				pq.push(make_pair(dx2, ++cnt));
//				check[dx2] = true;
//				count_stone++;
//			}
//		}
//
//	}
//	cout << count_stone << endl;
//	
//	system("pause");
//	return 0;
//}