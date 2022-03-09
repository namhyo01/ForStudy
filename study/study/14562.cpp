//#include <bits/stdc++.h>
//#define endl "\n"
//using namespace std;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int C;
//	cin >> C;
//	while (C--) {
//		unordered_map<int, bool> check;
//		int S, T;
//		cin >> S >> T;
//		queue<pair<pair<int, int>, int> >pq;
//		pq.push(make_pair(make_pair(S, 0),T));
//		while (!pq.empty()) {
//			int num = pq.front().first.first;
//			int cnt = pq.front().first.second;
//			int t = pq.front().second;
//			pq.pop();
//			if (num == t) {
//				cout << num<<t<<cnt << endl;
//				break;
//			}
//			if (!check[num * 2] && num * 2 <= t + 3) {
//				pq.push(make_pair(make_pair(num * 2, cnt + 1), t + 3));
//				check[num * 2] = true;
//			}
//			if (!check[num + 1] && num + 1 <= t) {
//				pq.push(make_pair(make_pair(num + 1, cnt + 1), t));
//				check[num + 1] = true;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}