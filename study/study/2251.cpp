//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//bool check[201][201][201];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int A, B, C;
//	cin >> A >> B >> C;
//	queue<pair<pair<int, int>, int> >pq;
//	vector<int> ans;
//	pq.push(make_pair(make_pair(0, 0), C));
//	while (!pq.empty()) {
//		int a, b, c;
//		a = pq.front().first.first;
//		b = pq.front().first.second;
//		c = pq.front().second;
//		pq.pop();
//		if (check[a][b][c])
//			continue;
//		if (a == 0) {
//			ans.push_back(c);
//		}
//		check[a][b][c] = true;
//		if (a + b > B) {
//			pq.push(make_pair(make_pair(a - (B - b), B), c));
//		}
//		else
//			pq.push(make_pair(make_pair(0, b + a), c));
//		if (b + c > C)
//			pq.push(make_pair(make_pair(a, b - (C - c)), C)); 
//		else pq.push(make_pair(make_pair(a, 0), c + b)); 
//		if (c + a > A) pq.push(make_pair(make_pair(A, b), c - (A - a))); 
//		else pq.push(make_pair(make_pair(a + c, b), 0)); 
//		if (a + c > C) pq.push(make_pair(make_pair(a - (C - c), b), C));
//		else pq.push(make_pair(make_pair(0, b), c + a)); 
//		if (a + b > A) pq.push(make_pair(make_pair(A, b - (A - a)), c)); 
//		else pq.push(make_pair(make_pair(a + b, 0), c)); 
//		if (c + b > B) pq.push(make_pair(make_pair(a, B), c - (B - b)));
//		else pq.push(make_pair(make_pair(a, b + c), 0));
//	}
//
//	sort(ans.begin(), ans.end());
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << " ";
//	
//
//	system("pause");
//	return 0;
//}