//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int n;
//int a, b;
//int m;
//int rel[101];
//bool check[101];
//vector<int> relat[101];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n;
//	cin >> a >> b;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		relat[x].push_back(y);
//		relat[y].push_back(x);
//		rel[x] = y;
//		rel[y] = x;
//	}
//	queue<pair<int,int> >pq;
//	pq.push(make_pair(a,0));
//	
//	while (!pq.empty()) {
//		int x =pq.front().first;
//		int cnt = pq.front().second;
//		check[x] = true;
//		pq.pop();
//		if (x==b) {
//			cout << cnt << endl;
//			system("pause");
//			return 0;
//		}
//		for (int i = 0; i < relat[x].size(); i++) {
//			if (!check[relat[x][i]]) {
//				
//				pq.push(make_pair(relat[x][i], cnt + 1));
//			}
//		}
//	}
//	cout << -1 << endl;
//
//	system("pause");
//	return 0;
//}